#pragma once
#include "../unitysdk.h"

namespace Animancer { class IAnimancerComponent; }
namespace Unity::Collections { class NativeArrayOptions; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ANIMANCER_ANIMATEDPROPERTY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_INITIALIZEPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_INITIALIZEPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_GETVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_GETVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMATEDPROPERTY`2_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int AnimatedProperty`2_TypeDefinitionIndex = 35174;

	class AnimatedProperty`2 : public ::FlatData::ClearDeckRuleExcel
	{
	public:
		Il2CppObject* _Properties; // 0x0
		Il2CppObject* _Values; // 0x0

		::System::Void .ctor(::Animancer::IAnimancerComponent* arg, ::System::Int32 arg, ::Unity::Collections::NativeArrayOptions* arg)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::System::Int32, ::Unity::Collections::NativeArrayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Animancer::IAnimancerComponent* arg, ::System::String* str)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::Animancer::IAnimancerComponent* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeProperty(::UnityEngine::Animator* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_INITIALIZEPROPERTY_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void InitializeProperty(::UnityEngine::Animator* arg, ::System::Int32 arg, ::UnityEngine::Transform* arg, ::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Transform*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_INITIALIZEPROPERTY_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void CreateJob()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_CREATEJOB_OFFSET))(nullptr);
		}

		Il2CppObject* get_Value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_GET_VALUE_OFFSET))(nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetValue(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_GETVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void GetValues(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_GETVALUES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetValues()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_GETVALUES_OFFSET))(nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMATEDPROPERTY`2_DESTROY_OFFSET))(nullptr);
		}

	};
}

