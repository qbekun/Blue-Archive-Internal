#pragma once
#include "unitysdk.h"

class UITexture;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIGACHABANNERTAB_ONCLICKGACHABANNERTAB_OFFSET UNITYSDK_OFFSET(0xA91340)
#define UIGACHABANNERTAB_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xA91360)
#define UIGACHABANNERTAB_SETDATA_OFFSET UNITYSDK_OFFSET(0xA91380)
#define UIGACHABANNERTAB_GET_SHOPRECRUIT_OFFSET UNITYSDK_OFFSET(0xA915A0)
#define UIGACHABANNERTAB_CO_LOADBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0xA91510)
#define UIGACHABANNERTAB_SET_SHOPRECRUIT_OFFSET UNITYSDK_OFFSET(0xA915D0)
#define UIGACHABANNERTAB_AWAKE_OFFSET UNITYSDK_OFFSET(0xA915F0)
#define UIGACHABANNERTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0xA91710)

	inline static constexpr unsigned int UIGachaBannerTab_TypeDefinitionIndex = 7938;

	class UIGachaBannerTab : public Il2CppObject
	{
	public:
		UITexture* image; // 0x18
		MXButton* button; // 0x20
		::UnityEngine::GameObject* selected; // 0x28
		Il2CppObject* clickedCallback; // 0x30
		::MX::Data::Excel::ShopRecruitExcel* _ShopRecruit_k__BackingField; // 0x38

		::System::Void OnClickGachaBannerTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_ONCLICKGACHABANNERTAB_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* get_ShopRecruit()
		{
			return ((::MX::Data::Excel::ShopRecruitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_GET_SHOPRECRUIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadBannerImage(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_CO_LOADBANNERIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopRecruit(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_SET_SHOPRECRUIT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHABANNERTAB_.CTOR_OFFSET))(nullptr);
		}

	};

