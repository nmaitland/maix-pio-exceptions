# maix-pio-exceptions

Proof-of-concept demonstrating C++ exception handling on the Sipeed Maix One Dock (Kendryte K210, RISC-V) using PlatformIO and the Kendryte FreeRTOS SDK.

The SDK disables exceptions by default (`-fno-exceptions`). This project overrides that with `-fexceptions` and runs a simple throw/catch test to confirm they work correctly.

## Build & Flash

Requires [PlatformIO](https://platformio.org/).

```bash
pio run -e sipeed-maix-one-dock -t upload
pio device monitor -b 115200
```
