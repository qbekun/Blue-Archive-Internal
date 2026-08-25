#pragma once
#include "unitysdk.h"

class ISyncable;
namespace MX::Logic::Data { class LogicEffectValue; }
class BuffIconData;

#define BUFFICONSBASE_GET_BUFFICONDATALIST_OFFSET UNITYSDK_OFFSET(0x25D6750)
#define BUFFICONSBASE_APPLYDATA_OFFSET UNITYSDK_OFFSET(0x25D6760)
#define BUFFICONSBASE_INIT_OFFSET UNITYSDK_OFFSET(0x25D3360)
#define BUFFICONSBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x25D3970)
#define BUFFICONSBASE_SYNCUITO_OFFSET UNITYSDK_OFFSET(0x25D3660)
#define BUFFICONSBASE_UNSYNCUI_OFFSET UNITYSDK_OFFSET(0x25D6C60)
#define BUFFICONSBASE_ATTACH_OFFSET UNITYSDK_OFFSET(0x25D6D30)
#define BUFFICONSBASE_ATTACH_OFFSET UNITYSDK_OFFSET(0x25D71D0)
#define BUFFICONSBASE_ATTACH_OFFSET UNITYSDK_OFFSET(0x25D7300)
#define BUFFICONSBASE_ATTACHDOT_OFFSET UNITYSDK_OFFSET(0x25D74D0)
#define BUFFICONSBASE_DETACH_OFFSET UNITYSDK_OFFSET(0x25D75F0)
#define BUFFICONSBASE_DETACH_OFFSET UNITYSDK_OFFSET(0x25D7830)
#define BUFFICONSBASE_DETACH_OFFSET UNITYSDK_OFFSET(0x25D7A60)
#define BUFFICONSBASE_DETACHDOT_OFFSET UNITYSDK_OFFSET(0x25D7C30)
#define BUFFICONSBASE_DATAMOVETO_OFFSET UNITYSDK_OFFSET(0x25D6F50)
#define BUFFICONSBASE_ICONREORDERALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BUFFICONSBASE_ENABLEANIMATION_OFFSET UNITYSDK_OFFSET(0x25D7F80)
#define BUFFICONSBASE_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x25D6E70)
#define BUFFICONSBASE_REORDERAFTERREFRESH_OFFSET UNITYSDK_OFFSET(0x25D7F90)
#define BUFFICONSBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D6630)

	inline static constexpr unsigned int BuffIconsBase_TypeDefinitionIndex = 6368;

	class BuffIconsBase : public Il2CppObject
	{
	public:
		ISyncable* visual; // 0x18
		Il2CppObject* buffIconDataList; // 0x20

		Il2CppObject* get_BuffIconDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_GET_BUFFICONDATALIST_OFFSET))(nullptr);
		}

		::System::Void ApplyData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_APPLYDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_INIT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SyncUITo(ISyncable* arg)
		{
			((::System::Void(*)(ISyncable*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_SYNCUITO_OFFSET))(arg, nullptr);
		}

		::System::Void UnSyncUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_UNSYNCUI_OFFSET))(nullptr);
		}

		::System::Void Attach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void Attach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void Attach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void AttachDot(Il2CppObject* arg, ::MX::Logic::Data::LogicEffectValue* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::Data::LogicEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ATTACHDOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_DETACH_OFFSET))(arg, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_DETACH_OFFSET))(arg, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_DETACH_OFFSET))(arg, nullptr);
		}

		::System::Void DetachDot(Il2CppObject* arg, ::MX::Logic::Data::LogicEffectValue* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::Data::LogicEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_DETACHDOT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataMoveTo(::System::Int32 arg, ::System::UInt32 arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_DATAMOVETO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERALL_OFFSET))(nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, ::System::UInt32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EnableAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ENABLEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHidden(::System::UInt32 arg)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_ISHIDDEN_OFFSET))(arg, nullptr);
		}

		::System::Void ReorderAfterRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_REORDERAFTERREFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONSBASE_.CTOR_OFFSET))(nullptr);
		}

	};

