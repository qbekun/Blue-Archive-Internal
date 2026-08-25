#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UIBattle;
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define UIBATTLEADDITIONAL_BASE_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_INIT_OFFSET UNITYSDK_OFFSET(0x25FACD0)
#define UIBATTLEADDITIONAL_BASE_SETDECO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x25FBC60)
#define UIBATTLEADDITIONAL_BASE_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_SETACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_CHECKANIMATIONFINISHCLOSE_OFFSET UNITYSDK_OFFSET(0x25F6BE0)
#define UIBATTLEADDITIONAL_BASE_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x25FBC70)
#define UIBATTLEADDITIONAL_BASE_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIBATTLEADDITIONAL_BASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F4190)

	inline static constexpr unsigned int UIBattleAdditional_Base_TypeDefinitionIndex = 6453;

	class UIBattleAdditional_Base : public Il2CppObject
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x18
		::UnityEngine::Animation* animation; // 0x20
		UIBattle* uiBattle; // 0x28
		::System::Boolean reserveCloseAfterAnimationFinish; // 0x30

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Init(UIBattle* arg, ::System::String* str)
		{
			((::System::Void(*)(UIBattle*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_INIT_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_SETDECO_OFFSET))(arg, nullptr);
		}

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_GET_PREFABPATH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckAnimationFinishClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_CHECKANIMATIONFINISHCLOSE_OFFSET))(nullptr);
		}

		::System::Void set_PrefabPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_SET_PREFABPATH_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONAL_BASE_.CTOR_OFFSET))(nullptr);
		}

	};

