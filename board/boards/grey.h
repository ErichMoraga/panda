// ////////// //
// Grey Panda //
// ////////// //

// Most hardware functionality is similar to white panda
const board board_grey = {
  .board_type = "Grey",
  .harness_config = &white_harness_config,
  .init = white_init,
  .enable_can_transciever = white_enable_can_transciever,
  .enable_can_transcievers = white_enable_can_transcievers,
  .set_led = white_set_led,
  .set_usb_power_mode = white_set_usb_power_mode,
  .set_esp_gps_mode = white_set_esp_gps_mode,
  .set_can_mode = white_set_can_mode,
  .usb_power_mode_tick = white_usb_power_mode_tick,
  .check_ignition = white_check_ignition,
  .read_current = white_read_current,
  .set_fan_power = white_set_fan_power,
  .set_ir_power = white_set_ir_power,
  .set_phone_power = white_set_phone_power
};