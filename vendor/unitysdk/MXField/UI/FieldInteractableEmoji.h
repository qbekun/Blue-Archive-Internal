#pragma once
#include "../../unitysdk.h"

class FloatingUIPositionComponent;
namespace MXField::Talk { class FieldAIConversant; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE8A940)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_UNSUSCRIBE_OFFSET UNITYSDK_OFFSET(0xE8A950)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8AC80)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xE8AC90)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_HANDLECONDITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xE8ACA0)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_HANDLEINTERACTIONSTART_OFFSET UNITYSDK_OFFSET(0xE8AED0)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_REFRESH_OFFSET UNITYSDK_OFFSET(0xE8AD10)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xE8AFB0)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_INITFLOATER_OFFSET UNITYSDK_OFFSET(0xE8AFC0)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_HANDLESCENECHANGED_OFFSET UNITYSDK_OFFSET(0xE8B240)
#define MXFIELD_UI_FIELDINTERACTABLEEMOJI_PLAY_OFFSET UNITYSDK_OFFSET(0xE8B2B0)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldInteractableEmoji_TypeDefinitionIndex = 10667;

	class FieldInteractableEmoji : public Il2CppObject
	{
	public:
		FloatingUIPositionComponent* floatingUIPositionComponent; // 0x18
		::MXField::Talk::FieldAIConversant* _Target_k__BackingField; // 0x20

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Unsuscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_UNSUSCRIBE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Talk::FieldAIConversant* get_Target()
		{
			return ((::MXField::Talk::FieldAIConversant*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Boolean HandleConditionChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_HANDLECONDITIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleInteractionStart(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_HANDLEINTERACTIONSTART_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_Target(::MXField::Talk::FieldAIConversant* arg)
		{
			((::System::Void(*)(::MXField::Talk::FieldAIConversant*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void InitFloater()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_INITFLOATER_OFFSET))(nullptr);
		}

		::System::Boolean HandleSceneChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_HANDLESCENECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::MXField::Talk::FieldAIConversant* arg)
		{
			((::System::Void(*)(::MXField::Talk::FieldAIConversant*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTABLEEMOJI_PLAY_OFFSET))(arg, nullptr);
		}

	};
}

