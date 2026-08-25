#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace MX::Data { class EventContentDiceRaceInfo; }

#define CONFIRMDICEINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23D1C60)
#define CONFIRMDICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D2020)
#define CONFIRMDICEINFO_REFRESHSELECTITEMS_OFFSET UNITYSDK_OFFSET(0x23D2030)

	inline static constexpr unsigned int ConfirmDiceInfo_TypeDefinitionIndex = 5309;

	class ConfirmDiceInfo : public Il2CppObject
	{
	public:
		Il2CppObject* confirmDiceItems; // 0x18
		::UnityEngine::Animation* hideAnimation; // 0x20

		::System::Void Initialize(::System::Int64 arg, ::MX::Data::EventContentDiceRaceInfo* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Data::EventContentDiceRaceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEINFO_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshSelectItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIRMDICEINFO_REFRESHSELECTITEMS_OFFSET))(nullptr);
		}

	};

