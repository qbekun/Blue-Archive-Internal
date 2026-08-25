#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int DEVMODE_TypeDefinitionIndex = 10168;

	class DEVMODE : public Il2CppObject
	{
	public:
		::System::Int32 CCHDEVICENAME; // 0x0
		::System::Int32 CCHFORMNAME; // 0x0
		::System::String* dmDeviceName; // 0x10
		::System::UInt16 dmSpecVersion; // 0x18
		::System::UInt16 dmDriverVersion; // 0x1A
		::System::UInt16 dmSize; // 0x1C
		::System::UInt16 dmDriverExtra; // 0x1E
		::System::UInt32 dmFields; // 0x20
		::System::Int32 dmPositionX; // 0x24
		::System::Int32 dmPositionY; // 0x28
		::System::UInt32 dmDisplayOrientation; // 0x2C
		::System::UInt32 dmDisplayFixedOutput; // 0x30
		::System::Int16 dmColor; // 0x34
		::System::Int16 dmDuplex; // 0x36
		::System::Int16 dmYResolution; // 0x38
		::System::Int16 dmTTOption; // 0x3A
		::System::Int16 dmCollate; // 0x3C
		::System::String* dmFormName; // 0x40
		::System::UInt16 dmLogPixels; // 0x48
		::System::UInt32 dmBitsPerPel; // 0x4C
		::System::UInt32 dmPelsWidth; // 0x50
		::System::UInt32 dmPelsHeight; // 0x54
		::System::UInt32 dmDisplayFlags; // 0x58
		::System::UInt32 dmDisplayFrequency; // 0x5C
		::System::UInt32 dmICMMethod; // 0x60
		::System::UInt32 dmICMIntent; // 0x64
		::System::UInt32 dmMediaType; // 0x68
		::System::UInt32 dmDitherType; // 0x6C
		::System::UInt32 dmReserved1; // 0x70
		::System::UInt32 dmReserved2; // 0x74
		::System::UInt32 dmPanningWidth; // 0x78
		::System::UInt32 dmPanningHeight; // 0x7C

	};

