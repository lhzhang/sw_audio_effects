.. _sec_api:

API
===

.. _sec_conf_defines:

Configuration Defines
---------------------
.. doxygendefine:: NUM_REV_TAPS 
.. doxygendefine:: DEF_ROOM_SIZE 
.. doxygendefine:: MIX_BITS 
.. doxygendefine:: DEF_DRY_LVL 
.. doxygendefine:: DEF_FX_LVL 
.. doxygendefine:: DEF_ATTN_MIX 
.. doxygendefine:: DEF_CROSS_MIX 

Functions
---------

Data Types
++++++++++
.. doxygentypedef:: S32_T

Data Structures
+++++++++++++++
.. doxygenstruct:: MIX_PARAM_TAG
.. doxygenstruct:: REVERB_PARAM_TAG

Configuration Functions
+++++++++++++++++++++++
.. doxygenfunction:: config_reverb

Receive Functions
+++++++++++++++++

Transmit Functions
++++++++++++++++++

DSP Processing Functions
++++++++++++++++++++++++
.. doxygenfunction:: use_reverb
