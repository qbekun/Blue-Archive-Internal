#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class MXButton;
class UIIdCardBackgroundListController;

#define UIIDCARDBACKGROUNDLISTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x25773C0)
#define UIIDCARDBACKGROUNDLISTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25776B0)
#define UIIDCARDBACKGROUNDLISTUNIT_GET_ID_OFFSET UNITYSDK_OFFSET(0x25776C0)
#define UIIDCARDBACKGROUNDLISTUNIT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x25776D0)
#define UIIDCARDBACKGROUNDLISTUNIT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x2577640)
#define UIIDCARDBACKGROUNDLISTUNIT_SET_ID_OFFSET UNITYSDK_OFFSET(0x25778B0)
#define UIIDCARDBACKGROUNDLISTUNIT_GET_LISTCONTOLLER_OFFSET UNITYSDK_OFFSET(0x2577820)
#define UIIDCARDBACKGROUNDLISTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x25778C0)

	inline static constexpr unsigned int UIIdCardBackgroundListUnit_TypeDefinitionIndex = 6175;

	class UIIdCardBackgroundListUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* selected; // 0x18
		UITexture* bgTexture; // 0x20
		::UnityEngine::GameObject* notOwned; // 0x28
		MXButton* onClick; // 0x30
		UIIdCardBackgroundListController* _ListContoller; // 0x38
		::System::Int64 _Id_k__BackingField; // 0x40

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_GET_ID_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_SET_ID_OFFSET))(arg, nullptr);
		}

		UIIdCardBackgroundListController* get_ListContoller()
		{
			return ((UIIdCardBackgroundListController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_GET_LISTCONTOLLER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTUNIT_AWAKE_OFFSET))(nullptr);
		}

	};

