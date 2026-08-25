#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UIGrid;
class UIMissionReceiveButton;
class MissionContentBase;

#define UIGUIDEMISSIONSCROLLELEMENT_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x25CA710)
#define UIGUIDEMISSIONSCROLLELEMENT_SETCOVER_OFFSET UNITYSDK_OFFSET(0x25CA920)
#define UIGUIDEMISSIONSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CA980)
#define UIGUIDEMISSIONSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x25CA9C0)

	inline static constexpr unsigned int UIGuideMissionScrollElement_TypeDefinitionIndex = 6330;

	class UIGuideMissionScrollElement : public ::System::Xml::Serialization::XmlElementEventHandler
	{
	public:
		UILabel* systemLabel; // 0x28
		UILabel* numberLabel; // 0x30
		::UnityEngine::GameObject* historyObject; // 0x38
		::UnityEngine::GameObject* lockedObject; // 0x40
		UIGrid* parcelGrid; // 0x48
		::Il2CppArray<::System::Object*>* parcelCards; // 0x50
		UIMissionReceiveButton* receiveButton; // 0x58
		MissionContentBase* mission; // 0x60

		::System::Void SetRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCROLLELEMENT_SETREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCover()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCROLLELEMENT_SETCOVER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(MissionContentBase* arg)
		{
			((::System::Void(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

