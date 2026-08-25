#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIWidget;

#define UITROPHYCOLLECTIONITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7F1A0)
#define UITROPHYCOLLECTIONITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0xB7E820)

	inline static constexpr unsigned int UITrophyCollectionItem_TypeDefinitionIndex = 8508;

	class UITrophyCollectionItem : public Il2CppObject
	{
	public:
		UITexture* FurnitureTexture; // 0x18
		UILabel* StarGradeLabel; // 0x20
		::UnityEngine::GameObject* Selected; // 0x28
		UIWidget* OwnedWidget; // 0x30
		::UnityEngine::GameObject* NotOwnedWidget; // 0x38
		::UnityEngine::GameObject* GradeWidget; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITROPHYCOLLECTIONITEM_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

