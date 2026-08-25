#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UIMultiFloorRaidSectionScrollViewController;
class UIOpenType;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_COWAITOPEN_OFFSET UNITYSDK_OFFSET(0x26AE520)
#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_COMOVETOSECTION_OFFSET UNITYSDK_OFFSET(0x26AB3C0)
#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26AE5D0)
#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AE780)
#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26AE7A0)
#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26AAEB0)
#define UIPOPUP_MULTIFLOORRAID_FLOORLIST_SELECTSECTIONMESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0x26AE880)

	inline static constexpr unsigned int UIPopup_MultiFloorRaid_FloorList_TypeDefinitionIndex = 6884;

	class UIPopup_MultiFloorRaid_FloorList : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* OpenAnimation; // 0xD8
		UIMultiFloorRaidSectionScrollViewController* ScrollView; // 0xE0
		::System::Single MoveWaitTime; // 0xE8
		::System::Single springStrength; // 0xEC
		UIOpenType* uiOpenType; // 0xF0
		::System::Int32 moveTargetSectionIndex; // 0xF4

		::System::Collections::IEnumerator* CoWaitOpen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_COWAITOPEN_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMoveToSection()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_COMOVETOSECTION_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialize(UIOpenType* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIOpenType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SelectSectionMessageHandler(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAID_FLOORLIST_SELECTSECTIONMESSAGEHANDLER_OFFSET))(arg, nullptr);
		}

	};

