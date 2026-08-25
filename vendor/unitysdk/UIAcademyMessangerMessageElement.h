#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class Transform; }
namespace MX::Data { class AcademyMessageData; }
namespace UnityEngine { class Vector3; }

#define UIACADEMYMESSANGERMESSAGEELEMENT_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x21A44A0)
#define UIACADEMYMESSANGERMESSAGEELEMENT_GET_BG_OFFSET UNITYSDK_OFFSET(0x21A4530)
#define UIACADEMYMESSANGERMESSAGEELEMENT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x21A45C0)
#define UIACADEMYMESSANGERMESSAGEELEMENT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x21A4600)
#define UIACADEMYMESSANGERMESSAGEELEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x21A46E0)
#define UIACADEMYMESSANGERMESSAGEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A4790)

	inline static constexpr unsigned int UIAcademyMessangerMessageElement_TypeDefinitionIndex = 4159;

	class UIAcademyMessangerMessageElement : public Il2CppObject
	{
	public:
		UILabel* label; // 0x18
		UISprite* bg; // 0x20
		::UnityEngine::Transform* MyTransform; // 0x28

		UILabel* get_Label()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEELEMENT_GET_LABEL_OFFSET))(nullptr);
		}

		UISprite* get_Bg()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEELEMENT_GET_BG_OFFSET))(nullptr);
		}

		::System::Void SetText(::MX::Data::AcademyMessageData* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::AcademyMessageData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEELEMENT_SETTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetText(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEELEMENT_SETTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEELEMENT_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

