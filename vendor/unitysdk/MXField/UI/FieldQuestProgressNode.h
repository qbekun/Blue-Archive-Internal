#pragma once
#include "../../unitysdk.h"

class UISprite;
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
class TweenPosition;
namespace MXField::UI { class FieldQuestProgressNodeState; }

#define MXFIELD_UI_FIELDQUESTPROGRESSNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE90C10)
#define MXFIELD_UI_FIELDQUESTPROGRESSNODE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE90C50)
#define MXFIELD_UI_FIELDQUESTPROGRESSNODE_PLAYCOMPLETEFX_OFFSET UNITYSDK_OFFSET(0xE90C80)
#define MXFIELD_UI_FIELDQUESTPROGRESSNODE_SETNODE_OFFSET UNITYSDK_OFFSET(0xE90D20)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldQuestProgressNode_TypeDefinitionIndex = 10684;

	class FieldQuestProgressNode : public Il2CppObject
	{
	public:
		UISprite* _iconDeco; // 0x18
		::UnityEngine::Color* _iconDecoReadyColor; // 0x20
		::UnityEngine::Color* _iconDecoProgressColor; // 0x30
		::UnityEngine::Color* _iconDecoCompleteColor; // 0x40
		UISprite* _iconCircle; // 0x50
		::UnityEngine::Color* _iconCircleReadyColor; // 0x58
		::UnityEngine::Color* _iconCircleActivatedColor; // 0x68
		UISprite* _iconGlow; // 0x78
		::UnityEngine::GameObject* _iconCompleteFX; // 0x80
		TweenPosition* _arrowTweenPosition; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDQUESTPROGRESSNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDQUESTPROGRESSNODE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PlayCompleteFX(float&* arg)
		{
			((::System::Void(*)(float&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDQUESTPROGRESSNODE_PLAYCOMPLETEFX_OFFSET))(arg, nullptr);
		}

		::System::Void SetNode(::MXField::UI::FieldQuestProgressNodeState* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::UI::FieldQuestProgressNodeState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDQUESTPROGRESSNODE_SETNODE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

