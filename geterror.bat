@echo off

if x%1==x goto no_args

arm-elf-addr2line -b elf32-littlearm -f -e lpc2104_color_lcd_v1.9.elf %1



goto end

:no_args

echo.
echo Usage: get_error <error number>
echo.

goto end



:end