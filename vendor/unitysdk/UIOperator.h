#pragma once
#include "unitysdk.h"

class GeneralOperator;
class SkillOperator;
namespace FlatData { class OperatorCondition; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define UIOPERATOR_GET_GENERALNONWAITOPERATOR_OFFSET UNITYSDK_OFFSET(0x26C9750)
#define UIOPERATOR_SET_GENERALNONWAITOPERATOR_OFFSET UNITYSDK_OFFSET(0x26C9760)
#define UIOPERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x26C9780)
#define UIOPERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26C9860)
#define UIOPERATOR_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26C9980)
#define UIOPERATOR_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26C9A00)
#define UIOPERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x26C9A90)
#define UIOPERATOR_SETGENERALOPERATORDEFAULTSETTING_OFFSET UNITYSDK_OFFSET(0x26C98E0)
#define UIOPERATOR_SHOW_OFFSET UNITYSDK_OFFSET(0x26C9DC0)
#define UIOPERATOR_SHOW_OFFSET UNITYSDK_OFFSET(0x26CA070)
#define UIOPERATOR_REQUESTGENERALOPERATOR_OFFSET UNITYSDK_OFFSET(0x26C9EC0)
#define UIOPERATOR_SHOW_OFFSET UNITYSDK_OFFSET(0x26CA1A0)
#define UIOPERATOR_HIDEALL_OFFSET UNITYSDK_OFFSET(0x26C97F0)
#define UIOPERATOR_HIDEGENERALOPERATOR_OFFSET UNITYSDK_OFFSET(0x26CA140)
#define UIOPERATOR_HIDESKILLOPERATOR_OFFSET UNITYSDK_OFFSET(0x26CA1D0)
#define UIOPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x26CA230)
#define UIOPERATOR___N__0_OFFSET UNITYSDK_OFFSET(0x26CA310)
#define UIOPERATOR__UPDATE_G__SORTBYOUTPUTPRIORITY|12_0_OFFSET UNITYSDK_OFFSET(0x26CA320)

	inline static constexpr unsigned int UIOperator_TypeDefinitionIndex = 7000;

	class UIOperator : public Il2CppObject
	{
	public:
		GeneralOperator* generalOperator; // 0xD8
		SkillOperator* skillOperator; // 0xE0
		Il2CppObject* _generalNonWaitOperator_k__BackingField; // 0xE8
		Il2CppObject* generalWaitQueue; // 0xF0
		Il2CppObject* generalWaitRequestList; // 0xF8

		Il2CppObject* get_generalNonWaitOperator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_GET_GENERALNONWAITOPERATOR_OFFSET))(nullptr);
		}

		::System::Void set_generalNonWaitOperator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_SET_GENERALNONWAITOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetGeneralOperatorDefaultSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_SETGENERALOPERATORDEFAULTSETTING_OFFSET))(nullptr);
		}

		::System::Void Show(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_SHOW_OFFSET))(str, nullptr);
		}

		::System::Void Show(::FlatData::OperatorCondition* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatData::OperatorCondition*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_SHOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestGeneralOperator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_REQUESTGENERALOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void Show(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_SHOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HideAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_HIDEALL_OFFSET))(nullptr);
		}

		::System::Void HideGeneralOperator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_HIDEGENERALOPERATOR_OFFSET))(nullptr);
		}

		::System::Void HideSkillOperator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_HIDESKILLOPERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR___N__0_OFFSET))(nullptr);
		}

		::System::Int32 _Update_g__SortByOutputPriority|12_0(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIOPERATOR__UPDATE_G__SORTBYOUTPUTPRIORITY|12_0_OFFSET))(arg, arg2, nullptr);
		}

	};

