#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_SERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x94173C0)
#define MXBEHAVIORTREE_SERVICE_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9417450)
#define MXBEHAVIORTREE_SERVICE_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9417460)
#define MXBEHAVIORTREE_SERVICE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9417470)
#define MXBEHAVIORTREE_SERVICE_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94174C0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Service_TypeDefinitionIndex = 36769;

	class Service : public Il2CppObject
	{
	public:
		::System::Single _interval_k__BackingField; // 0x38
		::System::Single nextUpdatedTime; // 0x3C

		::System::Void .ctor(::System::Single arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SERVICE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_interval()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SERVICE_GET_INTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_interval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SERVICE_SET_INTERVAL_OFFSET))(arg, nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SERVICE_ONUPDATE_OFFSET))(nullptr);
		}

		State* UpdateInternal()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SERVICE_UPDATEINTERNAL_OFFSET))(nullptr);
		}

	};
}

