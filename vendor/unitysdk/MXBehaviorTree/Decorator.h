#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_DECORATOR_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x940C3E0)
#define MXBEHAVIORTREE_DECORATOR_SET_ABORTTYPE_OFFSET UNITYSDK_OFFSET(0x940C400)
#define MXBEHAVIORTREE_DECORATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x940C410)
#define MXBEHAVIORTREE_DECORATOR_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x940C490)
#define MXBEHAVIORTREE_DECORATOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x940C4A0)
#define MXBEHAVIORTREE_DECORATOR_GET_ABORTTYPE_OFFSET UNITYSDK_OFFSET(0x940C4F0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Decorator_TypeDefinitionIndex = 36756;

	class Decorator : public Il2CppObject
	{
	public:
		AbortType* _abortType_k__BackingField; // 0x38

		State* UpdateInternal()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DECORATOR_UPDATEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_abortType(AbortType* arg)
		{
			((::System::Void(*)(AbortType*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DECORATOR_SET_ABORTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(AbortType* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(AbortType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DECORATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DECORATOR_GET_ISLOOP_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DECORATOR_ONUPDATE_OFFSET))(nullptr);
		}

		AbortType* get_abortType()
		{
			return (return (AbortType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DECORATOR_GET_ABORTTYPE_OFFSET))(nullptr);
		}

	};
}

