#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }

#define IPORTRAITSPINECHARACTER_SETRENDERQUEUEORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPORTRAITSPINECHARACTER_WAITFORANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPORTRAITSPINECHARACTER_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPORTRAITSPINECHARACTER_SETEXSKILLSHADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPORTRAITSPINECHARACTER_SETLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPORTRAITSPINECHARACTER_PLAYUIDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPORTRAITSPINECHARACTER_SETMESHRENDERERSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IPortraitSpineCharacter_TypeDefinitionIndex = 3759;

	class IPortraitSpineCharacter : public Il2CppObject
	{
	public:
		::System::Void SetRenderQueueOrder(UIWidget* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIWidget*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_SETRENDERQUEUEORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void WaitForAnimation(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_WAITFORANIMATION_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetExSkillShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_SETEXSKILLSHADER_OFFSET))(nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void PlayUIDefaultAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_PLAYUIDEFAULTANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetMeshRendererSortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IPORTRAITSPINECHARACTER_SETMESHRENDERERSORTINGORDER_OFFSET))(arg, nullptr);
		}

	};

