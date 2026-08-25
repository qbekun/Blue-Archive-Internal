#pragma once
#include "unitysdk.h"

#define ICONFRONTATIONGAUGE_CLOSEGAUGEEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONFRONTATIONGAUGE_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONFRONTATIONGAUGE_SETGAUGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONFRONTATIONGAUGE_CLOSETARGETCHARACTERDEAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONFRONTATIONGAUGE_CLOSEGAUGEFULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONFRONTATIONGAUGE_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IConfrontationGauge_TypeDefinitionIndex = 6419;

	class IConfrontationGauge : public Il2CppObject
	{
	public:
		::System::Void CloseGaugeEmpty(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ICONFRONTATIONGAUGE_CLOSEGAUGEEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void Open(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ICONFRONTATIONGAUGE_OPEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetGauge(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ICONFRONTATIONGAUGE_SETGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CloseTargetCharacterDead(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ICONFRONTATIONGAUGE_CLOSETARGETCHARACTERDEAD_OFFSET))(arg, nullptr);
		}

		::System::Void CloseGaugeFull(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ICONFRONTATIONGAUGE_CLOSEGAUGEFULL_OFFSET))(arg, nullptr);
		}

		::System::Void SetPortrait(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICONFRONTATIONGAUGE_SETPORTRAIT_OFFSET))(str, str2, nullptr);
		}

	};

