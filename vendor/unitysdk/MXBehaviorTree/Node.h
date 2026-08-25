#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BehaviorTreeContext; }
namespace MXBehaviorTree { class Decorator; }
namespace MXBehaviorTree { class Node; }
namespace MXBehaviorTree { class Service; }

#define MXBEHAVIORTREE_NODE_SORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x9414120)
#define MXBEHAVIORTREE_NODE_TRAVEL_OFFSET UNITYSDK_OFFSET(0x9402A90)
#define MXBEHAVIORTREE_NODE_ISANYSUCESSDECORATORS_OFFSET UNITYSDK_OFFSET(0x9414130)
#define MXBEHAVIORTREE_NODE_ONABORT_OFFSET UNITYSDK_OFFSET(0x94142F0)
#define MXBEHAVIORTREE_NODE_INIT_OFFSET UNITYSDK_OFFSET(0x9402DE0)
#define MXBEHAVIORTREE_NODE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x9414310)
#define MXBEHAVIORTREE_NODE_INSERTDECORATOR_OFFSET UNITYSDK_OFFSET(0x9414320)
#define MXBEHAVIORTREE_NODE_GET_ID_OFFSET UNITYSDK_OFFSET(0x94143D0)
#define MXBEHAVIORTREE_NODE_ONINIT_OFFSET UNITYSDK_OFFSET(0x94143E0)
#define MXBEHAVIORTREE_NODE_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x94143F0)
#define MXBEHAVIORTREE_NODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_NODE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9414400)
#define MXBEHAVIORTREE_NODE_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9414410)
#define MXBEHAVIORTREE_NODE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x9414A70)
#define MXBEHAVIORTREE_NODE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9414AC0)
#define MXBEHAVIORTREE_NODE_REMOVEDECORATOR_OFFSET UNITYSDK_OFFSET(0x9414AD0)
#define MXBEHAVIORTREE_NODE_UPDATESERVICE_OFFSET UNITYSDK_OFFSET(0x9414910)
#define MXBEHAVIORTREE_NODE_ADDDECORATOR_OFFSET UNITYSDK_OFFSET(0x9414B50)
#define MXBEHAVIORTREE_NODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x9414C50)
#define MXBEHAVIORTREE_NODE_GETDECORATORS_OFFSET UNITYSDK_OFFSET(0x9414C60)
#define MXBEHAVIORTREE_NODE_ADDSERVICE_OFFSET UNITYSDK_OFFSET(0x9414C70)
#define MXBEHAVIORTREE_NODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9407210)
#define MXBEHAVIORTREE_NODE_ABORT_OFFSET UNITYSDK_OFFSET(0x94098C0)
#define MXBEHAVIORTREE_NODE_SET_ID_OFFSET UNITYSDK_OFFSET(0x9414D70)
#define MXBEHAVIORTREE_NODE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x9414D80)
#define MXBEHAVIORTREE_NODE_REMOVESERVICE_OFFSET UNITYSDK_OFFSET(0x9414D90)
#define MXBEHAVIORTREE_NODE_ISALLSUCESSDECORATORS_OFFSET UNITYSDK_OFFSET(0x9414750)
#define MXBEHAVIORTREE_NODE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x9414E10)
#define MXBEHAVIORTREE_NODE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9414E20)
#define MXBEHAVIORTREE_NODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9402A50)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Node_TypeDefinitionIndex = 36766;

	class Node : public Il2CppObject
	{
	public:
		::System::Int64 _id_k__BackingField; // 0x10
		Il2CppObject* decorators; // 0x18
		Il2CppObject* services; // 0x20
		::MXBehaviorTree::BehaviorTreeContext* _context_k__BackingField; // 0x28
		::System::Boolean entered; // 0x30

		::System::Void SortChildren(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_SORTCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void Travel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_TRAVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAnySucessDecorators(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ISANYSUCESSDECORATORS_OFFSET))(arg, nullptr);
		}

		::System::Void OnAbort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ONABORT_OFFSET))(nullptr);
		}

		::System::Void Init(::MXBehaviorTree::BehaviorTreeContext* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeContext*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_childCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Void InsertDecorator(::System::Int32 arg, ::MXBehaviorTree::Decorator* arg)
		{
			((::System::Void(*)(::System::Int32, ::MXBehaviorTree::Decorator*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_INSERTDECORATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ONINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetServices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_GETSERVICES_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ONENTER_OFFSET))(nullptr);
		}

		State* UpdateInternal()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_UPDATEINTERNAL_OFFSET))(nullptr);
		}

		::MXBehaviorTree::Node* GetChild(::System::Int32 arg)
		{
			return (return (::MXBehaviorTree::Node*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_context(::MXBehaviorTree::BehaviorTreeContext* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeContext*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveDecorator(::MXBehaviorTree::Decorator* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Decorator*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_REMOVEDECORATOR_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateService()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_UPDATESERVICE_OFFSET))(nullptr);
		}

		::System::Void AddDecorator(::MXBehaviorTree::Decorator* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Decorator*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ADDDECORATOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddChild(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDecorators()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_GETDECORATORS_OFFSET))(nullptr);
		}

		::System::Void AddService(::MXBehaviorTree::Service* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Service*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ADDSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Abort(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ABORT_OFFSET))(arg, nullptr);
		}

		::System::Void set_id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveChild(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveService(::MXBehaviorTree::Service* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Service*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_REMOVESERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAllSucessDecorators(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ISALLSUCESSDECORATORS_OFFSET))(arg, nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_ONEXIT_OFFSET))(nullptr);
		}

		::MXBehaviorTree::BehaviorTreeContext* get_context()
		{
			return (return (::MXBehaviorTree::BehaviorTreeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_GET_CONTEXT_OFFSET))(nullptr);
		}

		State* Update()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODE_UPDATE_OFFSET))(nullptr);
		}

	};
}

