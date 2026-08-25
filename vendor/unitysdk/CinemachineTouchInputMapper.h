#pragma once
#include "unitysdk.h"

#define CINEMACHINETOUCHINPUTMAPPER_START_OFFSET UNITYSDK_OFFSET(0x281C4F0)
#define CINEMACHINETOUCHINPUTMAPPER_GETINPUTAXIS_OFFSET UNITYSDK_OFFSET(0x281C5A0)
#define CINEMACHINETOUCHINPUTMAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x281C660)

	inline static constexpr unsigned int CinemachineTouchInputMapper_TypeDefinitionIndex = 34185;

	class CinemachineTouchInputMapper : public Il2CppObject
	{
	public:
		::System::Single TouchSensitivityX; // 0x18
		::System::Single TouchSensitivityY; // 0x1C
		::System::String* TouchXInputMapTo; // 0x20
		::System::String* TouchYInputMapTo; // 0x28

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_START_OFFSET))(nullptr);
		}

		::System::Single GetInputAxis(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_GETINPUTAXIS_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_.CTOR_OFFSET))(nullptr);
		}

	};

