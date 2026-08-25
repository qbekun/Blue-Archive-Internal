#pragma once
#include "unitysdk.h"

class MXButton;
namespace MX::Data { class EventContentSeasonInfo; }
class UISpecialOperationCollectionObject;
class UIScenarioMode_MainChapter;

#define UISPECIALOPERATIONCOLLECTION_ONBACK_OFFSET UNITYSDK_OFFSET(0x24A59B0)
#define UISPECIALOPERATIONCOLLECTION_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x24A5A80)
#define UISPECIALOPERATIONCOLLECTION_ONCOLLECTIONOBJECTFOCUSED_OFFSET UNITYSDK_OFFSET(0x24A5D20)
#define UISPECIALOPERATIONCOLLECTION_CO_SHOWUNLOCKCOLLECTIONOBJECTS_OFFSET UNITYSDK_OFFSET(0x24A5E40)
#define UISPECIALOPERATIONCOLLECTION_SETOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x24A5ED0)
#define UISPECIALOPERATIONCOLLECTION_SETSCENARIOCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x24A5F80)
#define UISPECIALOPERATIONCOLLECTION___N__0_OFFSET UNITYSDK_OFFSET(0x24A5F90)
#define UISPECIALOPERATIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A5FA0)
#define UISPECIALOPERATIONCOLLECTION_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24A5FB0)
#define UISPECIALOPERATIONCOLLECTION__ONBACK_B__12_0_OFFSET UNITYSDK_OFFSET(0x24A5FD0)
#define UISPECIALOPERATIONCOLLECTION_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x24A61F0)
#define UISPECIALOPERATIONCOLLECTION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24A6210)
#define UISPECIALOPERATIONCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A62A0)
#define UISPECIALOPERATIONCOLLECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A65E0)

	inline static constexpr unsigned int UISpecialOperationCollection_TypeDefinitionIndex = 5814;

	class UISpecialOperationCollection : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xE0
		::Il2CppArray<::System::Object*>* collectionObjects; // 0xE8
		::System::Int64 ScenaroCollectionGroupId; // 0xF0

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_ONBACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void OnCollectionObjectFocused(UISpecialOperationCollectionObject* arg)
		{
			((::System::Void(*)(UISpecialOperationCollectionObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_ONCOLLECTIONOBJECTFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowUnlockCollectionObjects()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_CO_SHOWUNLOCKCOLLECTIONOBJECTS_OFFSET))(nullptr);
		}

		::System::Void SetOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_SETOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void SetScenarioCollectionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_SETSCENARIOCOLLECTIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnBack_b__12_0(UIScenarioMode_MainChapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainChapter*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION__ONBACK_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISPECIALOPERATIONCOLLECTION_SETDATA_OFFSET))(arg, nullptr);
		}

	};

