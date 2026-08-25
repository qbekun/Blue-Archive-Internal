#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class CommonContainer;
namespace FlatData { class WeekDungeonType; }

#define CONTENTINFO_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xBCFE60)
#define CONTENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCFE80)
#define CONTENTINFO_SET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ContentInfo_TypeDefinitionIndex = 8657;

	class ContentInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* RootObject; // 0x10
		CommonContainer* CommonContainer; // 0x18

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTINFO_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTINFO_SET_OFFSET))(arg, nullptr);
		}

	};

