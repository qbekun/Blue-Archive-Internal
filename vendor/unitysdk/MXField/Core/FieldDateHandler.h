#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldDateInfo; }
namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_CORE_FIELDDATEHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xED4C00)
#define MXFIELD_CORE_FIELDDATEHANDLER_SET_ISENDREADY_OFFSET UNITYSDK_OFFSET(0xED4E60)
#define MXFIELD_CORE_FIELDDATEHANDLER_START_OFFSET UNITYSDK_OFFSET(0xED4E70)
#define MXFIELD_CORE_FIELDDATEHANDLER_SET_DATEINFO_OFFSET UNITYSDK_OFFSET(0xED5060)
#define MXFIELD_CORE_FIELDDATEHANDLER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xED4E80)
#define MXFIELD_CORE_FIELDDATEHANDLER_HANDLECONDITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xED5070)
#define MXFIELD_CORE_FIELDDATEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED52E0)
#define MXFIELD_CORE_FIELDDATEHANDLER_HANDLESCENECHANGED_OFFSET UNITYSDK_OFFSET(0xED52F0)
#define MXFIELD_CORE_FIELDDATEHANDLER_GET_DATEINFO_OFFSET UNITYSDK_OFFSET(0xED5370)
#define MXFIELD_CORE_FIELDDATEHANDLER_GET_ISENDREADY_OFFSET UNITYSDK_OFFSET(0xED5380)
#define MXFIELD_CORE_FIELDDATEHANDLER_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xED4C10)
#define MXFIELD_CORE_FIELDDATEHANDLER_SET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xED5390)
#define MXFIELD_CORE_FIELDDATEHANDLER_GET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xED53A0)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldDateHandler_TypeDefinitionIndex = 10940;

	class FieldDateHandler : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldDateInfo* _DateInfo_k__BackingField; // 0x18
		::MXField::Shared::Data::FieldSceneInfo* _SceneInfo_k__BackingField; // 0x20
		::System::Boolean _IsEndReady_k__BackingField; // 0x28

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_IsEndReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_SET_ISENDREADY_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_START_OFFSET))(nullptr);
		}

		::System::Void set_DateInfo(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_SET_DATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_SUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Boolean HandleConditionChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_HANDLECONDITIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleSceneChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_HANDLESCENECHANGED_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldDateInfo* get_DateInfo()
		{
			return ((::MXField::Shared::Data::FieldDateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_GET_DATEINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEndReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_GET_ISENDREADY_OFFSET))(nullptr);
		}

		::System::Void Unsubscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_UNSUBSCRIBE_OFFSET))(nullptr);
		}

		::System::Void set_SceneInfo(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_SET_SCENEINFO_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_SceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDDATEHANDLER_GET_SCENEINFO_OFFSET))(nullptr);
		}

	};
}

