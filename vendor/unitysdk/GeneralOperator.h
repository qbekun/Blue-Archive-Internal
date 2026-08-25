#pragma once
#include "unitysdk.h"

class OnOffTweenSwitch;
class UILabel;
class UITexture;
namespace UnityEngine { class Coroutine; }
namespace MX::Data::Excel { class OperatorExcel; }
namespace FlatData { class CharacterVoiceOverridePriority; }

#define GENERALOPERATOR_SHOWOPERATOR_OFFSET UNITYSDK_OFFSET(0x26C7DE0)
#define GENERALOPERATOR_COOPERATE_OFFSET UNITYSDK_OFFSET(0x26C7F80)
#define GENERALOPERATOR_SET_OPERATECOROUTINE_OFFSET UNITYSDK_OFFSET(0x26C8030)
#define GENERALOPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C8040)
#define GENERALOPERATOR_SETDATA_OFFSET UNITYSDK_OFFSET(0x26C8050)
#define GENERALOPERATOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x26C7E90)
#define GENERALOPERATOR_GET_OPERATECOROUTINE_OFFSET UNITYSDK_OFFSET(0x26C8190)
#define GENERALOPERATOR_SELECTDATA_OFFSET UNITYSDK_OFFSET(0x26C81A0)
#define GENERALOPERATOR_COVOICEPLAY_OFFSET UNITYSDK_OFFSET(0x26C8640)
#define GENERALOPERATOR_WAITFOROPERATING_OFFSET UNITYSDK_OFFSET(0x26C86E0)

	inline static constexpr unsigned int GeneralOperator_TypeDefinitionIndex = 6998;

	class GeneralOperator : public Il2CppObject
	{
	public:
		OnOffTweenSwitch* tweener; // 0x18
		UILabel* textLabel; // 0x20
		UITexture* characterPortrait; // 0x28
		::UnityEngine::Coroutine* _operateCoroutine_k__BackingField; // 0x30

		::System::Void ShowOperator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_SHOWOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOperate(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_COOPERATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_operateCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_SET_OPERATECOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_SETDATA_OFFSET))(str, str2, nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_PREPARE_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* get_operateCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_GET_OPERATECOROUTINE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::OperatorExcel* SelectData(Il2CppObject* arg)
		{
			return ((::MX::Data::Excel::OperatorExcel*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_SELECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoVoicePlay(Il2CppObject* arg, ::FlatData::CharacterVoiceOverridePriority* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::FlatData::CharacterVoiceOverridePriority*, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_COVOICEPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* WaitForOperating(::System::Single arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GENERALOPERATOR_WAITFOROPERATING_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

