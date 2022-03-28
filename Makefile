
DESIGN=src/vhsync.sv
TB=tb/vhsync.cpp

main: verilate.stamp
	make -C obj_dir -f Vvhsync.mk

verilate.stamp: $(DESIGN) $(TB)
	verilator -Wall --trace --cc $(DESIGN) -exe $(TB)
	touch verilate.stamp


clean:
	rm -rf verilate.stamp obj_dir waveform.vcd log
