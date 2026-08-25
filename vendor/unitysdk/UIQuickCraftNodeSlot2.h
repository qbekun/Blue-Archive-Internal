#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class ShaderTextureController;
namespace UnityEngine { class Texture; }

#define UIQUICKCRAFTNODESLOT2_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A8750)
#define UIQUICKCRAFTNODESLOT2_SETICON_OFFSET UNITYSDK_OFFSET(0x23A8760)
#define UIQUICKCRAFTNODESLOT2_SETNODEQUALITY_OFFSET UNITYSDK_OFFSET(0x23A87E0)
#define UIQUICKCRAFTNODESLOT2_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x23A8970)

	inline static constexpr unsigned int UIQuickCraftNodeSlot2_TypeDefinitionIndex = 5197;

	class UIQuickCraftNodeSlot2 : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* unSelectObj; // 0x18
		::UnityEngine::GameObject* selectObj; // 0x20
		ShaderTextureController* iconShader; // 0x28
		ShaderTextureController* HDRSub; // 0x30
		::UnityEngine::GameObject* FX_UI_Node_Sub01; // 0x38
		::UnityEngine::GameObject* FX_UI_Node_Sub02; // 0x40
		::Il2CppArray<::System::Object*>* SubIconValue; // 0x48
		::Il2CppArray<::System::Object*>* HDRSubValue; // 0x50
		::System::Int64 currentNodeId; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODESLOT2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetIcon(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODESLOT2_SETICON_OFFSET))(arg, nullptr);
		}

		::System::Void SetNodeQuality(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODESLOT2_SETNODEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIQUICKCRAFTNODESLOT2_SETSELECTED_OFFSET))(arg, nullptr);
		}

	};

