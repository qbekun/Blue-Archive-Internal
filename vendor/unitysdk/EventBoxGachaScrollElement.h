#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class EventBoxGachaItemDisplay;
class EventBoxGachaInfo;

#define EVENTBOXGACHASCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x247CB10)
#define EVENTBOXGACHASCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x247CB20)
#define EVENTBOXGACHASCROLLELEMENT_SETUI_OFFSET UNITYSDK_OFFSET(0x247CB80)

	inline static constexpr unsigned int EventBoxGachaScrollElement_TypeDefinitionIndex = 5674;

	class EventBoxGachaScrollElement : public Il2CppObject
	{
	public:
		UILabel* leftCount; // 0x18
		UILabel* parcelName; // 0x20
		::UnityEngine::GameObject* leftCountRoot; // 0x28
		::UnityEngine::GameObject* soldOut; // 0x30
		EventBoxGachaItemDisplay* prize; // 0x38
		EventBoxGachaItemDisplay* nonPrize; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(EventBoxGachaInfo* arg)
		{
			((::System::Void(*)(EventBoxGachaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI(EventBoxGachaInfo* arg)
		{
			((::System::Void(*)(EventBoxGachaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLELEMENT_SETUI_OFFSET))(arg, nullptr);
		}

	};

