#pragma once
#include "unitysdk.h"

class WidgetFloater;
class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIHPBar;
namespace UnityEngine { class Vector3; }
namespace FlatData { class BattleDialogType; }
namespace UnityEngine { class Transform; }

#define DIALOGBUBBLE_GET_VIEWZ_OFFSET UNITYSDK_OFFSET(0x25E1D40)
#define DIALOGBUBBLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25E1DC0)
#define DIALOGBUBBLE_PLAY_OFFSET UNITYSDK_OFFSET(0x25E1E50)
#define DIALOGBUBBLE_UPDATEDEPTH_OFFSET UNITYSDK_OFFSET(0x25E1FA0)
#define DIALOGBUBBLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25E2000)
#define DIALOGBUBBLE_GET_LOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x25E2010)
#define DIALOGBUBBLE_INITSCALE_OFFSET UNITYSDK_OFFSET(0x25E20C0)
#define DIALOGBUBBLE_SETDATA_OFFSET UNITYSDK_OFFSET(0x25E2270)
#define DIALOGBUBBLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25E2510)
#define DIALOGBUBBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E2680)
#define DIALOGBUBBLE_COPLAY_OFFSET UNITYSDK_OFFSET(0x25E1F10)

	inline static constexpr unsigned int DialogBubble_TypeDefinitionIndex = 6384;

	class DialogBubble : public Il2CppObject
	{
	public:
		WidgetFloater* floater; // 0x18
		UILabel* normalDialogLabel; // 0x20
		UILabel* shoutDialogLabel; // 0x28
		UISprite* spriteNormalBubble; // 0x30
		::UnityEngine::GameObject* normalSpeechSet; // 0x38
		::UnityEngine::GameObject* shoutSpeechSet; // 0x40
		::UnityEngine::Animation* anim; // 0x48
		UIHPBar* parent; // 0x50
		::System::Single duration; // 0x58
		::Il2CppArray<::System::Object*>* widgets; // 0x60
		::System::Int32 depthBias; // 0x68

		::System::Single get_ViewZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_GET_VIEWZ_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_UPDATEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_localOffset()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_GET_LOCALOFFSET_OFFSET))(nullptr);
		}

		::System::Void InitScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_INITSCALE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, ::FlatData::BattleDialogType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::String*, ::FlatData::BattleDialogType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_SETDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, UIHPBar* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DIALOGBUBBLE_COPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};

