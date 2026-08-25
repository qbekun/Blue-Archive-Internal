#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }

#define PORTRAITSPINECHARACTERSET_COSETPORTRAITS_OFFSET UNITYSDK_OFFSET(0x20E04C0)
#define PORTRAITSPINECHARACTERSET_COWAITFORANIMATION_OFFSET UNITYSDK_OFFSET(0x20E05B0)
#define PORTRAITSPINECHARACTERSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E0670)
#define PORTRAITSPINECHARACTERSET_SETRENDERQUEUEORDER_OFFSET UNITYSDK_OFFSET(0x20E06F0)
#define PORTRAITSPINECHARACTERSET_SETMESHRENDERERSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x20E0880)
#define PORTRAITSPINECHARACTERSET_WAITFORANIMATION_OFFSET UNITYSDK_OFFSET(0x20E0A40)
#define PORTRAITSPINECHARACTERSET_SETEXSKILLSHADER_OFFSET UNITYSDK_OFFSET(0x20E0A60)
#define PORTRAITSPINECHARACTERSET_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x20E0BC0)
#define PORTRAITSPINECHARACTERSET_SETLAYER_OFFSET UNITYSDK_OFFSET(0x20E0BD0)
#define PORTRAITSPINECHARACTERSET_PLAYUIDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x20E0D70)
#define PORTRAITSPINECHARACTERSET_SETPORTRAITS_OFFSET UNITYSDK_OFFSET(0x20E0ED0)

	inline static constexpr unsigned int PortraitSpineCharacterSet_TypeDefinitionIndex = 3770;

	class PortraitSpineCharacterSet : public Il2CppObject
	{
	public:
		Il2CppObject* portraitSpineCharacterInfos; // 0x18
		Il2CppObject* portraitSpineCharacters; // 0x20

		::System::Collections::IEnumerator* CoSetPortraits(Il2CppObject* arg, UIWidget* arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, UIWidget*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_COSETPORTRAITS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForAnimation(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_COWAITFORANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRenderQueueOrder(UIWidget* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIWidget*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_SETRENDERQUEUEORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMeshRendererSortingOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_SETMESHRENDERERSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void WaitForAnimation(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_WAITFORANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetExSkillShader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_SETEXSKILLSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void PlayUIDefaultAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_PLAYUIDEFAULTANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetPortraits(Il2CppObject* arg, UIWidget* arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, UIWidget*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSPINECHARACTERSET_SETPORTRAITS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

