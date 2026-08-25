#pragma once
#include "unitysdk.h"

class UIToast;
class MissionContentBase;
namespace FlatData { class ToastType; }
namespace Assets::_MX::Program::Scripts::Network { class AbstractNetworkTask; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define TOASTTASK_GET_WAITFORNOTICE_OFFSET UNITYSDK_OFFSET(0x203B920)
#define TOASTTASK_SET_WAITFORNOTICE_OFFSET UNITYSDK_OFFSET(0x203B930)
#define TOASTTASK_GET_CANSHOWMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0x203B940)
#define TOASTTASK_SET_CANSHOWMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0x203B950)
#define TOASTTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x203B960)
#define TOASTTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2036B20)
#define TOASTTASK_SHOWMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0x203BBA0)
#define TOASTTASK_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x203BC40)
#define TOASTTASK_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x203BCC0)
#define TOASTTASK_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x203BD50)
#define TOASTTASK_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x203BE00)
#define TOASTTASK_CLEARTOAST_OFFSET UNITYSDK_OFFSET(0x203BB30)
#define TOASTTASK_REQUESTNOTICETOAST_OFFSET UNITYSDK_OFFSET(0x203C1B0)
#define TOASTTASK_ONNOTICERESPONSED_OFFSET UNITYSDK_OFFSET(0x203C310)
#define TOASTTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x203C360)
#define TOASTTASK__REQUESTNOTICETOAST_B__17_0_OFFSET UNITYSDK_OFFSET(0x203C370)
#define TOASTTASK__REQUESTNOTICETOAST_B__17_1_OFFSET UNITYSDK_OFFSET(0x203C440)
#define TOASTTASK__REQUESTNOTICETOAST_B__17_2_OFFSET UNITYSDK_OFFSET(0x203C490)

	inline static constexpr unsigned int ToastTask_TypeDefinitionIndex = 3247;

	class ToastTask : public Il2CppObject
	{
	public:
		UIToast* toastUI; // 0x10
		::System::Boolean _WaitForNotice_k__BackingField; // 0x18
		::System::Boolean _CanShowMissionToast_k__BackingField; // 0x19

		::System::Boolean get_WaitForNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_GET_WAITFORNOTICE_OFFSET))(nullptr);
		}

		::System::Void set_WaitForNotice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SET_WAITFORNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanShowMissionToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_GET_CANSHOWMISSIONTOAST_OFFSET))(nullptr);
		}

		::System::Void set_CanShowMissionToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SET_CANSHOWMISSIONTOAST_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void ShowMissionToast(MissionContentBase* arg)
		{
			((::System::Void(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SHOWMISSIONTOAST_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToast(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SHOWTOAST_OFFSET))(str, nullptr);
		}

		::System::Void ShowToast(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SHOWTOAST_OFFSET))(str, str2, nullptr);
		}

		::System::Void ShowToast(::System::String* str, ::FlatData::ToastType* arg, ::System::Single arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::String*, ::FlatData::ToastType*, ::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SHOWTOAST_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ShowToast(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_SHOWTOAST_OFFSET))(arg, nullptr);
		}

		::System::Void ClearToast()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_CLEARTOAST_OFFSET))(nullptr);
		}

		::System::Void RequestNoticeToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_REQUESTNOTICETOAST_OFFSET))(arg, nullptr);
		}

		::System::Void OnNoticeResponsed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_ONNOTICERESPONSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RequestNoticeToast_b__17_0(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK__REQUESTNOTICETOAST_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestNoticeToast_b__17_1(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK__REQUESTNOTICETOAST_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestNoticeToast_b__17_2(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTTASK__REQUESTNOTICETOAST_B__17_2_OFFSET))(arg, nullptr);
		}

	};

