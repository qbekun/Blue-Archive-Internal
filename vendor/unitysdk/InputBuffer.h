#pragma once
#include "unitysdk.h"

#define INPUTBUFFER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_SET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_BUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_BUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_TRYENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int InputBuffer_TypeDefinitionIndex = 37787;

	class InputBuffer : public ::MX::MinigameCCG::ParameterDecl::EntityCollection
	{
	public:
		Il2CppObject* _Key_k__BackingField; // 0x0

		Il2CppObject* get_Key()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Buffer(Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_BUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Buffer(Il2CppObject* arg, Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_BUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryEnterState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_TRYENTERSTATE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER_CLEAR_OFFSET))(nullptr);
		}

	};

