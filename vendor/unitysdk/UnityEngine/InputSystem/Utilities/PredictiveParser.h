#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_EXPECTSINGLECHAR_OFFSET UNITYSDK_OFFSET(0x9E86550)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_ACCEPTINT_OFFSET UNITYSDK_OFFSET(0x9E86660)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_EXPECTSTRING_OFFSET UNITYSDK_OFFSET(0x9E866E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_EXPECTINT_OFFSET UNITYSDK_OFFSET(0x9E86920)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_ACCEPTSINGLECHAR_OFFSET UNITYSDK_OFFSET(0x9E86A50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_ACCEPTSTRING_OFFSET UNITYSDK_OFFSET(0x9E86A90)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int PredictiveParser_TypeDefinitionIndex = 28949;

	class PredictiveParser : public Il2CppObject
	{
	public:
		::System::Int32 m_Position; // 0x10

		::System::Void ExpectSingleChar(Il2CppObject* arg, ::System::Char arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_EXPECTSINGLECHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AcceptInt(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_ACCEPTINT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExpectString(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_EXPECTSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 ExpectInt(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_EXPECTINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean AcceptSingleChar(Il2CppObject* arg, ::System::Char arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_ACCEPTSINGLECHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AcceptString(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_PREDICTIVEPARSER_ACCEPTSTRING_OFFSET))(arg, arg, nullptr);
		}

	};
}

