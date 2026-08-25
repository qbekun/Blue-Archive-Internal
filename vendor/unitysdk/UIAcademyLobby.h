#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class UIAcademyLocationUnit;
class MXButton;
class SpineChatDialogContainer;
class UILabel;
class MXToggle;
namespace MX::SaveData { class AcademyScheduleEXPShowSaveData; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIACADEMYLOBBY_CREATELIST_OFFSET UNITYSDK_OFFSET(0x21AEAD0)
#define UIACADEMYLOBBY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x21AEDF0)
#define UIACADEMYLOBBY_GET_GRID_OFFSET UNITYSDK_OFFSET(0x21AED20)
#define UIACADEMYLOBBY_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21AF090)
#define UIACADEMYLOBBY_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x21AF150)
#define UIACADEMYLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x21AF210)
#define UIACADEMYLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x21AF630)
#define UIACADEMYLOBBY_HANDLESELECTACADEMYLOCATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x21AF640)
#define UIACADEMYLOBBY_SETOPENCHECKED_OFFSET UNITYSDK_OFFSET(0x21AF800)
#define UIACADEMYLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21AF8E0)
#define UIACADEMYLOBBY_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x21AF960)
#define UIACADEMYLOBBY_OPENCHECKED_OFFSET UNITYSDK_OFFSET(0x21AF9F0)
#define UIACADEMYLOBBY_ONTOGGLEEXP_OFFSET UNITYSDK_OFFSET(0x21AFAD0)
#define UIACADEMYLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21B0090)
#define UIACADEMYLOBBY_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x21B0440)
#define UIACADEMYLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B1830)
#define UIACADEMYLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x21B1900)
#define UIACADEMYLOBBY_SHOWOPEN_OFFSET UNITYSDK_OFFSET(0x21B0940)

	inline static constexpr unsigned int UIAcademyLobby_TypeDefinitionIndex = 4187;

	class UIAcademyLobby : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0xD8
		UIGrid* grid; // 0xE0
		UIAcademyLocationUnit* LocationUnitPrefab; // 0xE8
		Il2CppObject* units; // 0xF0
		MXButton* BackButton; // 0xF8
		::System::String* defaultOpenAniName; // 0x100
		::System::String* backOpenAniName; // 0x108
		SpineChatDialogContainer* spineChatDialogContainer; // 0x110
		UILabel* totalRankLabel; // 0x118
		MXToggle* expShowToggle; // 0x120
		Il2CppObject* unlockList; // 0x128
		::MX::SaveData::AcademyScheduleEXPShowSaveData* saveData; // 0x130
		::System::Single unlockTime; // 0x138

		::System::Void CreateList(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_CREATELIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_ONDESTROY_OFFSET))(nullptr);
		}

		UIGrid* get_Grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_GET_GRID_OFFSET))(nullptr);
		}

		UIScrollView* get_ScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectAcademyLocationMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_HANDLESELECTACADEMYLOCATIONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpenChecked(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_SETOPENCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Single get_UnlockTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_GET_UNLOCKTIME_OFFSET))(nullptr);
		}

		::System::Boolean OpenChecked(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_OPENCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleExp(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_ONTOGGLEEXP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowOpen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOBBY_SHOWOPEN_OFFSET))(nullptr);
		}

	};

