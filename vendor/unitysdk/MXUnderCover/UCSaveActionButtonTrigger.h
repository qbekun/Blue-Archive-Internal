#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Collider; }

#define MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD95300)
#define MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_ONCUSTOMTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD953A0)
#define MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD955F0)
#define MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_GET_PLAYERS_OFFSET UNITYSDK_OFFSET(0xD956E0)
#define MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_SET_PLAYERS_OFFSET UNITYSDK_OFFSET(0xD956F0)
#define MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD95700)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSaveActionButtonTrigger_TypeDefinitionIndex = 9737;

	class UCSaveActionButtonTrigger : public Il2CppObject
	{
	public:
		Il2CppObject* _Players_k__BackingField; // 0x78

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean OnCustomTriggerEnter(::UnityEngine::Collider* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_ONCUSTOMTRIGGERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_ONTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Players()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_GET_PLAYERS_OFFSET))(nullptr);
		}

		::System::Void set_Players(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_SET_PLAYERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSAVEACTIONBUTTONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

