#pragma once
#include "unitysdk.h"

class WidgetFloater;
class UILabel;
class TweenAlpha;
class UIHPBar;
namespace UnityEngine { class Vector3; }
namespace MX::Data::Excel { class SkillExcel; }
namespace UnityEngine { class Transform; }

#define SPEECHBUBBLE_GET_VIEWZ_OFFSET UNITYSDK_OFFSET(0x25F23E0)
#define SPEECHBUBBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F2460)
#define SPEECHBUBBLE_UPDATEDEPTH_OFFSET UNITYSDK_OFFSET(0x25F2470)
#define SPEECHBUBBLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25F24D0)
#define SPEECHBUBBLE_GET_LOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x25F2640)
#define SPEECHBUBBLE_INITSCALE_OFFSET UNITYSDK_OFFSET(0x25F26F0)
#define SPEECHBUBBLE_SETDATA_OFFSET UNITYSDK_OFFSET(0x25F28A0)
#define SPEECHBUBBLE_COPLAY_OFFSET UNITYSDK_OFFSET(0x25F2960)
#define SPEECHBUBBLE_PLAY_OFFSET UNITYSDK_OFFSET(0x25F2A10)
#define SPEECHBUBBLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25F2B30)
#define SPEECHBUBBLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25F2CA0)

	inline static constexpr unsigned int SpeechBubble_TypeDefinitionIndex = 6430;

	class SpeechBubble : public Il2CppObject
	{
	public:
		WidgetFloater* floater; // 0x18
		UILabel* label; // 0x20
		TweenAlpha* tweenAlpha; // 0x28
		UIHPBar* parent; // 0x30
		::System::Single duration; // 0x38
		::Il2CppArray<::System::Object*>* widgets; // 0x40
		::System::Int32 depthBias; // 0x48

		::System::Single get_ViewZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_GET_VIEWZ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_UPDATEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_UNLOAD_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_localOffset()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_GET_LOCALOFFSET_OFFSET))(nullptr);
		}

		::System::Void InitScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_INITSCALE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::SkillExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SkillExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, UIHPBar* arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPEECHBUBBLE_ONDISABLE_OFFSET))(nullptr);
		}

	};

