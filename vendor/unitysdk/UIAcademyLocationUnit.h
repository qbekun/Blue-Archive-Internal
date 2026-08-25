#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class UISlider;
class UISmallParcelCard;
namespace MX::Data { class AcademyLocationData; }
class UIWidget;
namespace UnityEngine { class Animation; }
class UIScrollView;
namespace UnityEngine { class Texture; }
namespace MX::Data { class AcademyData; }
namespace MX::Data { class CharacterData; }

#define UIACADEMYLOCATIONUNIT_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x21BAFD0)
#define UIACADEMYLOCATIONUNIT_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x21BAFE0)
#define UIACADEMYLOCATIONUNIT_SETDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21B1720)
#define UIACADEMYLOCATIONUNIT_GETUNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x21AF9C0)
#define UIACADEMYLOCATIONUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BB0B0)
#define UIACADEMYLOCATIONUNIT__SETDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0x21BB0C0)
#define UIACADEMYLOCATIONUNIT__SHOWUNLOCKANI_B__31_0_OFFSET UNITYSDK_OFFSET(0x21BB0F0)
#define UIACADEMYLOCATIONUNIT_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x21BB120)
#define UIACADEMYLOCATIONUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B0C00)
#define UIACADEMYLOCATIONUNIT_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x21BB1E0)
#define UIACADEMYLOCATIONUNIT_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x21BB1F0)
#define UIACADEMYLOCATIONUNIT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x21BB200)
#define UIACADEMYLOCATIONUNIT_GET_DRAGS_OFFSET UNITYSDK_OFFSET(0x21BB000)
#define UIACADEMYLOCATIONUNIT_SHOWUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x21B2930)
#define UIACADEMYLOCATIONUNIT_SETLOCATIONEXP_OFFSET UNITYSDK_OFFSET(0x21AFC60)

	inline static constexpr unsigned int UIAcademyLocationUnit_TypeDefinitionIndex = 4216;

	class UIAcademyLocationUnit : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		::UnityEngine::GameObject* locked; // 0x20
		UILabel* locationName; // 0x28
		UITexture* texture; // 0x30
		UILabel* rankLabel; // 0x38
		UISlider* expSlider; // 0x40
		UILabel* expLabel; // 0x48
		::UnityEngine::GameObject* maxGuageRoot; // 0x50
		UISmallParcelCard* parcelCard; // 0x58
		Il2CppObject* drags; // 0x60
		Il2CppObject* conditions; // 0x68
		::System::Int64 _LocationId_k__BackingField; // 0x70
		::System::Boolean _IsOpen_k__BackingField; // 0x78
		::MX::Data::AcademyLocationData* academyLocationData; // 0x80
		UIWidget* WidgetForVisibleCheck; // 0x88
		::UnityEngine::Animation* unlockAni; // 0x90

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetDragScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_SETDRAGSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::System::Single GetUnlockTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_GETUNLOCKTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__24_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT__SETDATA_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowUnlockAni_b__31_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT__SHOWUNLOCKANI_B__31_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_Conditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_GET_CONDITIONS_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::AcademyLocationData* arg, ::MX::Data::AcademyData* arg2, ::MX::Data::CharacterData* arg3, Il2CppObject* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Data::AcademyLocationData*, ::MX::Data::AcademyData*, ::MX::Data::CharacterData*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_Drags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_GET_DRAGS_OFFSET))(nullptr);
		}

		::System::Void ShowUnlockAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_SHOWUNLOCKANI_OFFSET))(nullptr);
		}

		::System::Void SetLocationExp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONUNIT_SETLOCATIONEXP_OFFSET))(nullptr);
		}

	};

