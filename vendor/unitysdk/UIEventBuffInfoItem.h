#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::Data { class EventContentBuffData; }
class UIEventBuffInfoDetail;
namespace UnityEngine { class Texture; }

#define UIEVENTBUFFINFOITEM_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0x241FEF0)
#define UIEVENTBUFFINFOITEM__ONCLICKDETAIL_B__7_0_OFFSET UNITYSDK_OFFSET(0x241FFD0)
#define UIEVENTBUFFINFOITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2420000)
#define UIEVENTBUFFINFOITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x2420040)
#define UIEVENTBUFFINFOITEM__SETDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x2420180)
#define UIEVENTBUFFINFOITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x24201B0)

	inline static constexpr unsigned int UIEventBuffInfoItem_TypeDefinitionIndex = 5500;

	class UIEventBuffInfoItem : public NamespaceDeclaration
	{
	public:
		UITexture* buffIcon; // 0x28
		UILabel* buffInfo; // 0x30
		::UnityEngine::GameObject* bg; // 0x38
		MXButton* detailButton; // 0x40
		::MX::Data::EventContentBuffData* buffData; // 0x48

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFOITEM_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Void _OnClickDetail_b__7_0(UIEventBuffInfoDetail* arg)
		{
			((::System::Void(*)(UIEventBuffInfoDetail*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFOITEM__ONCLICKDETAIL_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFOITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFOITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__6_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFOITEM__SETDATA_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentBuffData* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentBuffData*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBUFFINFOITEM_SETDATA_OFFSET))(arg, nullptr);
		}

	};

