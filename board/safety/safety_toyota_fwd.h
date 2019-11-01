static void toyota_fwd_rx_hook(CAN_FIFOMailBox_TypeDef *to_push) {
  UNUSED(to_push);
}

static int toyota_fwd_tx_hook(CAN_FIFOMailBox_TypeDef *to_send) {
  UNUSED(to_send);
  return 1;
}

static void toyota_fwd_init(int16_t param) {
  UNUSED(param);
  controls_allowed = 1;
}

static int toyota_fwd_fwd_hook(int bus_num, CAN_FIFOMailBox_TypeDef *to_fwd) {
  UNUSED(to_fwd);
  int bus_fwd = -1;

  if (bus_num == 0) {
    bus_fwd = 2;
  }
  if (bus_num == 2) {
    bus_fwd = 0;
  }
  return bus_fwd;
}

const safety_hooks toyota_fwd_hooks = {
  .init = toyota_fwd_init,
  .rx = toyota_fwd_rx_hook,
  .tx = toyota_fwd_tx_hook,
  .tx_lin = nooutput_tx_lin_hook,
  .fwd = toyota_fwd_fwd_hook,
};
