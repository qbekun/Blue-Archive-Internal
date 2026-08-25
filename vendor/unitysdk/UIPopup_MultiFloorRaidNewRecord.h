#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class Transform; }

#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AD170)
#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_AWAKE_OFFSET UNITYSDK_OFFSET(0x26AD180)
#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26AD2B0)
#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_SETPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x26AD420)
#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26AD760)
#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26AD7D0)
#define UIPOPUP_MULTIFLOORRAIDNEWRECORD_ONCLICKSHOWALL_OFFSET UNITYSDK_OFFSET(0x26ADA80)

	inline static constexpr unsigned int UIPopup_MultiFloorRaidNewRecord_TypeDefinitionIndex = 6878;

	class UIPopup_MultiFloorRaidNewRecord : public Il2CppObject
	{
	public:
		UILabel* currentFloorLabel; // 0xD8
		UILabel* renewFloorLabel; // 0xE0
		::Il2CppArray<::System::Object*>* parcelCards; // 0xE8
		MXButton* ShowAllButton; // 0xF0
		::UnityEngine::Transform* ShowAllButtonRoot; // 0xF8
		::System::Int32 prevRecordFloor; // 0x100
		Il2CppObject* allRewards; // 0x108

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetParcelCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_SETPARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShowAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTIFLOORRAIDNEWRECORD_ONCLICKSHOWALL_OFFSET))(nullptr);
		}

	};

