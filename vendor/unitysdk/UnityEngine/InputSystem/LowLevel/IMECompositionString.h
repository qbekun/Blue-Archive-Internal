#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F57C40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F57BD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F57D20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9F57D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9F57DC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9F57CB0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IMECompositionString_TypeDefinitionIndex = 28780;

	class IMECompositionString : public Il2CppObject
	{
	public:
		::System::Int32 size; // 0x10
		<buffer>e__FixedBuffer* buffer; // 0x14

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Char get_Item(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

