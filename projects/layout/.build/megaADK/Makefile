


















.build/megaADK/TFTv2/font.o : lib/TFTv2/font.c
	@echo [93mTFTv2/font.c[0m
	@mkdir -p .build/megaADK/TFTv2
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c lib/TFTv2/font.c
include .build/megaADK/TFTv2/font.d






.build/megaADK/TFTv2/TFTv2.o : lib/TFTv2/TFTv2.cpp
	@echo [93mTFTv2/TFTv2.cpp[0m
	@mkdir -p .build/megaADK/TFTv2
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c lib/TFTv2/TFTv2.cpp
include .build/megaADK/TFTv2/TFTv2.d



.build/megaADK/TFTv2/libTFTv2.a : .build/megaADK/TFTv2/font.o .build/megaADK/TFTv2/TFTv2.o
	@echo [92mLinking libTFTv2.a[0m
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/megaADK/SPI/SPI.o : lib/SPI/SPI.cpp
	@echo [93mSPI/SPI.cpp[0m
	@mkdir -p .build/megaADK/SPI
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c lib/SPI/SPI.cpp
include .build/megaADK/SPI/SPI.d



.build/megaADK/SPI/libSPI.a : .build/megaADK/SPI/SPI.o
	@echo [92mLinking libSPI.a[0m
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/megaADK/arduino/WInterrupts.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/WInterrupts.c
	@echo [93marduino/WInterrupts.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/WInterrupts.c
include .build/megaADK/arduino/WInterrupts.d

.build/megaADK/arduino/wiring_digital.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_digital.c
	@echo [93marduino/wiring_digital.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_digital.c
include .build/megaADK/arduino/wiring_digital.d

.build/megaADK/arduino/wiring_pulse.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_pulse.c
	@echo [93marduino/wiring_pulse.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_pulse.c
include .build/megaADK/arduino/wiring_pulse.d

.build/megaADK/arduino/wiring.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring.c
	@echo [93marduino/wiring.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring.c
include .build/megaADK/arduino/wiring.d

.build/megaADK/arduino/wiring_analog.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_analog.c
	@echo [93marduino/wiring_analog.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_analog.c
include .build/megaADK/arduino/wiring_analog.d

.build/megaADK/arduino/hooks.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/hooks.c
	@echo [93marduino/hooks.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/hooks.c
include .build/megaADK/arduino/hooks.d

.build/megaADK/arduino/wiring_shift.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_shift.c
	@echo [93marduino/wiring_shift.c[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino   -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/wiring_shift.c
include .build/megaADK/arduino/wiring_shift.d






.build/megaADK/arduino/HardwareSerial.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp
	@echo [93marduino/HardwareSerial.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp
include .build/megaADK/arduino/HardwareSerial.d

.build/megaADK/arduino/WMath.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/WMath.cpp
	@echo [93marduino/WMath.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/WMath.cpp
include .build/megaADK/arduino/WMath.d

.build/megaADK/arduino/HardwareSerial1.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp
	@echo [93marduino/HardwareSerial1.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp
include .build/megaADK/arduino/HardwareSerial1.d

.build/megaADK/arduino/abi.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/abi.cpp
	@echo [93marduino/abi.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/abi.cpp
include .build/megaADK/arduino/abi.d

.build/megaADK/arduino/main.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/main.cpp
	@echo [93marduino/main.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/main.cpp
include .build/megaADK/arduino/main.d

.build/megaADK/arduino/IPAddress.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/IPAddress.cpp
	@echo [93marduino/IPAddress.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/IPAddress.cpp
include .build/megaADK/arduino/IPAddress.d

.build/megaADK/arduino/HardwareSerial3.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp
	@echo [93marduino/HardwareSerial3.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp
include .build/megaADK/arduino/HardwareSerial3.d

.build/megaADK/arduino/Print.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/Print.cpp
	@echo [93marduino/Print.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/Print.cpp
include .build/megaADK/arduino/Print.d

.build/megaADK/arduino/HID.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HID.cpp
	@echo [93marduino/HID.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HID.cpp
include .build/megaADK/arduino/HID.d

.build/megaADK/arduino/USBCore.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/USBCore.cpp
	@echo [93marduino/USBCore.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/USBCore.cpp
include .build/megaADK/arduino/USBCore.d

.build/megaADK/arduino/HardwareSerial2.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp
	@echo [93marduino/HardwareSerial2.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp
include .build/megaADK/arduino/HardwareSerial2.d

.build/megaADK/arduino/HardwareSerial0.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp
	@echo [93marduino/HardwareSerial0.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp
include .build/megaADK/arduino/HardwareSerial0.d

.build/megaADK/arduino/new.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/new.cpp
	@echo [93marduino/new.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/new.cpp
include .build/megaADK/arduino/new.d

.build/megaADK/arduino/WString.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/WString.cpp
	@echo [93marduino/WString.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/WString.cpp
include .build/megaADK/arduino/WString.d

.build/megaADK/arduino/Stream.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/Stream.cpp
	@echo [93marduino/Stream.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/Stream.cpp
include .build/megaADK/arduino/Stream.d

.build/megaADK/arduino/Tone.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/Tone.cpp
	@echo [93marduino/Tone.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/Tone.cpp
include .build/megaADK/arduino/Tone.d

.build/megaADK/arduino/CDC.o : /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/CDC.cpp
	@echo [93marduino/CDC.cpp[0m
	@mkdir -p .build/megaADK/arduino
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions  -o $@ -c /usr/local/share/arduino/hardware/arduino/avr/cores/arduino/CDC.cpp
include .build/megaADK/arduino/CDC.d



.build/megaADK/arduino/libarduino.a : .build/megaADK/arduino/WInterrupts.o .build/megaADK/arduino/wiring_digital.o .build/megaADK/arduino/wiring_pulse.o .build/megaADK/arduino/wiring.o .build/megaADK/arduino/wiring_analog.o .build/megaADK/arduino/hooks.o .build/megaADK/arduino/wiring_shift.o .build/megaADK/arduino/HardwareSerial.o .build/megaADK/arduino/WMath.o .build/megaADK/arduino/HardwareSerial1.o .build/megaADK/arduino/abi.o .build/megaADK/arduino/main.o .build/megaADK/arduino/IPAddress.o .build/megaADK/arduino/HardwareSerial3.o .build/megaADK/arduino/Print.o .build/megaADK/arduino/HID.o .build/megaADK/arduino/USBCore.o .build/megaADK/arduino/HardwareSerial2.o .build/megaADK/arduino/HardwareSerial0.o .build/megaADK/arduino/new.o .build/megaADK/arduino/WString.o .build/megaADK/arduino/Stream.o .build/megaADK/arduino/Tone.o .build/megaADK/arduino/CDC.o
	@echo [92mLinking libarduino.a[0m
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^















.build/megaADK/src/layout.o : .build/megaADK/src/layout.cpp
	@echo [93msrc/layout.cpp[0m
	@mkdir -p .build/megaADK/src
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=160 -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/local/share/arduino/hardware/arduino/avr/variants/mega -Ilib/TFTv2 -Ilib/SPI -I/usr/local/share/arduino/hardware/arduino/avr/cores/arduino -fno-exceptions -iquote src  -o $@ -c .build/megaADK/src/layout.cpp
include .build/megaADK/src/layout.d







.build/megaADK/firmware.elf : .build/megaADK/src/layout.o .build/megaADK/TFTv2/libTFTv2.a .build/megaADK/SPI/libSPI.a .build/megaADK/arduino/libarduino.a
	@echo [92mLinking firmware.elf[0m
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega2560 -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build/megaADK/firmware.hex : .build/megaADK/firmware.elf
	@echo [92mConverting to firmware.hex[0m
	@/usr/local/share/arduino/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/megaADK/src/dependencies.d .build/megaADK/TFTv2/dependencies.d .build/megaADK/SPI/dependencies.d .build/megaADK/arduino/dependencies.d

all : .build/megaADK/firmware.hex
	@true

