#pragma once
#include "unitysdk.h"

#define GUIDEMISSIONUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C38C0)
#define GUIDEMISSIONUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3B30)

	inline static constexpr unsigned int GuideMissionUIOpener_TypeDefinitionIndex = 6960;

	class GuideMissionUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

