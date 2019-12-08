/*
 *
 * Copyright  1990-2006 Sun Microsystems, Inc. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation. 
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt). 
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA 
 * 
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 or visit www.sun.com if you need additional
 * information or have any questions. 
 */

package com.sun.midp.lcdui;

import javax.microedition.lcdui.Display;
import javax.microedition.lcdui.Displayable;
import javax.microedition.lcdui.Image;

import com.sun.midp.midlet.MIDletEventConsumer;
import com.sun.midp.security.SecurityToken;

/**
 * Public interface for an object that is used to provide internal access
 * to a Display object, across package boundaries.  The object implements
 * this interface, and is created inside the same package as Display,  so
 * that it has access to private instance data of Display as necessary.
 */
public interface DisplayAccess {
    /**
     * Get the Display object that is associated with this DisplayAccess.
     * @return Display The Display object.
     */
    Display getDisplay();

    // API's for accessing Display from Games Package

    /**
     * Called to get key mask of all the keys that were pressed.
     * @return keyMask  The key mask of all the keys that were pressed.
     */
    int getKeyMask();

    /**
     * Flushes the entire off-screen buffer to the display.
     * @param screen The Displayable 
     * @param offscreen_buffer The image buffer 
     * @param x The left edge of the region to be flushed
     * @param y The top edge of the region to be flushed
     * @param width The width of the region to be flushed
     * @param height The height of the region to be flushed
     */
    void flush(Displayable screen, Image offscreen_buffer,
	       int x, int y, int width, int height);

    /**
     * Set the trusted icon for this Display. When ever this display is in
     * the foreground the given icon will be displayed in the area reserved for
     * the trusted icon. Setting the icon to null will clear the trusted
     * icon. Only callers with the internal MIDP permission can use this method.
     *
     * @param token security token of the call that has internal MIDP
     *              permission
     * @param drawTrusted true to draw the trusted icon
     */
    void setTrustedIcon(SecurityToken token, boolean drawTrusted);

    /**
     * Called when the system needs to temporarily prevent the application
     * from painting the screen.  The primary use of this method is to allow
     * a system service to temporarily utilize the screen, e.g. to provide
     * input method or abstract command processing.
     *
     * This method should prevent application-based paints (i.e. those
     * generated by Canvas.repaint(), Canvas.serviceRepaints() or some
     * internal paint method on another kind of Displayable) from changing
     * the contents of the screen in any way.
     */
    // void suspendPainting();

    /**
     * Called when the system is ready to give up its control over the
     * screen.  The application should receive a request for a full
     * repaint when this is called, and is subsequently free to process
     * paint events from Canvas.repaint(), Canvas.serviceRepaints() or
     * internal paint methods on Displayable.
     */
    // void resumePainting();

    /**
     * Get the ID of this display.
     *
     * @return Display ID
     */
    public int getDisplayId();

    /**
     * Sets the ID of this display.
     * Shall be called only from DisplayContainer.addDisplay() during 
     * Display construction and registration in the container.
     *
     * @param newId new ID for Display associated with this DisplayAccess
     */
    public void setDisplayId(int newId);

    /**
     * Get the MIDletEventConsumer associated with this display.
     *
     * @return Consumer of midlet events that go through this display
     */
    public MIDletEventConsumer getMIDletEventConsumer();

    /**
     * Get the DisplayEventConsumer associated with this display.
     *
     * @return Consumer of midlet events that go through this display
     */
    public DisplayEventConsumer getDisplayEventConsumer();
}
