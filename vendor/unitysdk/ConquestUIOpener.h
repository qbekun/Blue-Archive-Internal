#pragma once
#include "unitysdk.h"

#define CONQUESTUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BEB50)
#define CONQUESTUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BEB60)
#define CONQUESTUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BEB70)

	inline static constexpr unsigned int ConquestUIOpener_TypeDefinitionIndex = 6932;

	class ConquestUIOpener : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

