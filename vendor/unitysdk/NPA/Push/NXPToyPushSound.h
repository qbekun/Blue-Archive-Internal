#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushSound; }

#define NPA_PUSH_NXPTOYPUSHSOUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCA020)
#define NPA_PUSH_NXPTOYPUSHSOUND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCA040)
#define NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CC8430)
#define NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CCA090)
#define NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CCA250)
#define NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CCA340)
#define NPA_PUSH_NXPTOYPUSHSOUND_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CCA350)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushSound_TypeDefinitionIndex = 27347;

	class NXPToyPushSound : public Il2CppObject
	{
	public:
		::System::Int32 _value; // 0x10
		::System::String* _name; // 0x18
		::NPA::Push::NXPToyPushSound* DEFAULT; // 0x0
		::NPA::Push::NXPToyPushSound* CUSTOM_SOUND_1; // 0x10
		::NPA::Push::NXPToyPushSound* CUSTOM_SOUND_2; // 0x20
		::NPA::Push::NXPToyPushSound* CUSTOM_SOUND_3; // 0x30
		::NPA::Push::NXPToyPushSound* SILENT_SOUND; // 0x40

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* op_Implicit(::NPA::Push::NXPToyPushSound* arg)
		{
			return (return (::System::String*(*)(::NPA::Push::NXPToyPushSound*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::NPA::Push::NXPToyPushSound* op_Implicit(::System::String* str)
		{
			return (return (::NPA::Push::NXPToyPushSound*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::NPA::Push::NXPToyPushSound* op_Implicit(::System::Int32 arg)
		{
			return (return (::NPA::Push::NXPToyPushSound*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(::NPA::Push::NXPToyPushSound* arg)
		{
			return (return (::System::Int32(*)(::NPA::Push::NXPToyPushSound*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHSOUND_.CCTOR_OFFSET))(nullptr);
		}

	};
}

