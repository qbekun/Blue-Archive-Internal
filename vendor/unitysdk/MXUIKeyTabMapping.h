#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class KeyMappingTabExcel; }
namespace MX::Controller { class ControllerKey; }

#define MXUIKEYTABMAPPING_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC840C0)
#define MXUIKEYTABMAPPING_UPDATE_OFFSET UNITYSDK_OFFSET(0xC840D0)
#define MXUIKEYTABMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC84C80)
#define MXUIKEYTABMAPPING_SET_OFFSET UNITYSDK_OFFSET(0xC84DD0)
#define MXUIKEYTABMAPPING_SETTABS_OFFSET UNITYSDK_OFFSET(0xC85040)
#define MXUIKEYTABMAPPING_SETTABS_OFFSET UNITYSDK_OFFSET(0xC85710)
#define MXUIKEYTABMAPPING_SETTABS_OFFSET UNITYSDK_OFFSET(0xC79520)
#define MXUIKEYTABMAPPING_SETTABS_OFFSET UNITYSDK_OFFSET(0xC858C0)
#define MXUIKEYTABMAPPING_ONVISIBLEICONBYOPTION_OFFSET UNITYSDK_OFFSET(0xC858F0)
#define MXUIKEYTABMAPPING_HIDEICON_OFFSET UNITYSDK_OFFSET(0xC859C0)
#define MXUIKEYTABMAPPING_CREATEICON_OFFSET UNITYSDK_OFFSET(0xC850B0)
#define MXUIKEYTABMAPPING_CREATEICON_OFFSET UNITYSDK_OFFSET(0xC85AF0)
#define MXUIKEYTABMAPPING_MOVETAB_OFFSET UNITYSDK_OFFSET(0xC84920)
#define MXUIKEYTABMAPPING_GETINDEX_OFFSET UNITYSDK_OFFSET(0xC85C80)
#define MXUIKEYTABMAPPING_ISCURBUTTON_OFFSET UNITYSDK_OFFSET(0xC84310)
#define MXUIKEYTABMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0xC85CD0)

	inline static constexpr unsigned int MXUIKeyTabMapping_TypeDefinitionIndex = 9073;

	class MXUIKeyTabMapping : public Il2CppObject
	{
	public:
		::System::String* _id; // 0x18
		::MX::Data::Excel::KeyMappingTabExcel* _data; // 0x20
		Il2CppObject* _icons; // 0x30
		::MX::Controller::ControllerKey* _leftKey; // 0x38
		::MX::Controller::ControllerKey* _rightKey; // 0x3C
		::System::Int32 _index; // 0x40
		::Il2CppArray<::System::Object*>* _tabs; // 0x48
		::Il2CppArray<::System::Object*>* _buttons; // 0x50
		::Il2CppArray<::System::Object*>* _subTabs; // 0x58
		::Il2CppArray<::System::Object*>* _etcTabs; // 0x60

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_SET_OFFSET))(str, nullptr);
		}

		::System::Void SetTabs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_SETTABS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTabs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_SETTABS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTabs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_SETTABS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTabs(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_SETTABS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnVisibleIconByOption(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_ONVISIBLEICONBYOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void HideIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_HIDEICON_OFFSET))(nullptr);
		}

		::System::Void CreateIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_CREATEICON_OFFSET))(nullptr);
		}

		::System::Void CreateIcon(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Int32 arg5, ::MX::Controller::ControllerKey* arg6)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::MX::Controller::ControllerKey*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_CREATEICON_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void MoveTab(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_MOVETAB_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetIndex(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_GETINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsCurButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_ISCURBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYTABMAPPING_.CTOR_OFFSET))(nullptr);
		}

	};

