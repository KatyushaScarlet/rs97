/* defined in machine/berzerk.c */

MACHINE_INIT( berzerk );
INTERRUPT_GEN( berzerk_interrupt );
WRITE8_HANDLER( berzerk_irq_enable_w );
WRITE8_HANDLER( berzerk_nmi_enable_w );
WRITE8_HANDLER( berzerk_nmi_disable_w );
READ8_HANDLER( berzerk_nmi_enable_r );
READ8_HANDLER( berzerk_nmi_disable_r );
READ8_HANDLER( berzerk_led_on_r );
READ8_HANDLER( berzerk_led_off_r );


/* defined in vidrhdw/berzerk.c */

extern data8_t *berzerk_magicram;

PALETTE_INIT( berzerk );
WRITE8_HANDLER( berzerk_videoram_w );
WRITE8_HANDLER( berzerk_colorram_w );
WRITE8_HANDLER( berzerk_magicram_w );
WRITE8_HANDLER( berzerk_magicram_control_w );
READ8_HANDLER( berzerk_port_4e_r );


/* defined in sndhrdw/berzerk.c */

extern struct Samplesinterface berzerk_samples_interface;
extern struct CustomSound_interface berzerk_custom_interface;
WRITE8_HANDLER( berzerk_sound_control_a_w );
WRITE8_HANDLER( berzerk_sound_control_b_w );
READ8_HANDLER( berzerk_voiceboard_r );
