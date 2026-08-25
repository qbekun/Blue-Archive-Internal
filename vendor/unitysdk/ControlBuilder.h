#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }

#define CONTROLBUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F70F00)
#define CONTROLBUILDER_WITHLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F70F60)
#define CONTROLBUILDER_WITHFORMAT_OFFSET UNITYSDK_OFFSET(0x9F71060)
#define CONTROLBUILDER_WITHFORMAT_OFFSET UNITYSDK_OFFSET(0x9F710B0)
#define CONTROLBUILDER_WITHBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x9F71120)
#define CONTROLBUILDER_WITHBITOFFSET_OFFSET UNITYSDK_OFFSET(0x9F71170)
#define CONTROLBUILDER_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0x9F711C0)
#define CONTROLBUILDER_ISNOISY_OFFSET UNITYSDK_OFFSET(0x9F71230)
#define CONTROLBUILDER_DONTRESET_OFFSET UNITYSDK_OFFSET(0x9F712A0)
#define CONTROLBUILDER_WITHSIZEINBITS_OFFSET UNITYSDK_OFFSET(0x9F71310)
#define CONTROLBUILDER_WITHRANGE_OFFSET UNITYSDK_OFFSET(0x9F71360)
#define CONTROLBUILDER_WITHUSAGES_OFFSET UNITYSDK_OFFSET(0x9F71420)
#define CONTROLBUILDER_WITHUSAGES_OFFSET UNITYSDK_OFFSET(0x9F71630)
#define CONTROLBUILDER_WITHUSAGES_OFFSET UNITYSDK_OFFSET(0x9F71780)
#define CONTROLBUILDER_WITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9F717A0)
#define CONTROLBUILDER_WITHPROCESSORS_OFFSET UNITYSDK_OFFSET(0x9F71870)
#define CONTROLBUILDER_WITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9F71950)
#define CONTROLBUILDER_USINGSTATEFROM_OFFSET UNITYSDK_OFFSET(0x9F719A0)
#define CONTROLBUILDER_ASARRAYOFCONTROLSWITHSIZE_OFFSET UNITYSDK_OFFSET(0x9F71A10)

	inline static constexpr unsigned int ControlBuilder_TypeDefinitionIndex = 28850;

	class ControlBuilder : public Il2CppObject
	{
	public:
		Builder* builder; // 0x10
		::System::Int32 index; // 0x18

		ControlBuilder* WithDisplayName(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHDISPLAYNAME_OFFSET))(str, nullptr);
		}

		ControlBuilder* WithLayout(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHLAYOUT_OFFSET))(str, nullptr);
		}

		ControlBuilder* WithFormat(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (ControlBuilder*(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHFORMAT_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithFormat(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHFORMAT_OFFSET))(str, nullptr);
		}

		ControlBuilder* WithByteOffset(::System::UInt32 arg)
		{
			return (return (ControlBuilder*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHBYTEOFFSET_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithBitOffset(::System::UInt32 arg)
		{
			return (return (ControlBuilder*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHBITOFFSET_OFFSET))(arg, nullptr);
		}

		ControlBuilder* IsSynthetic(::System::Boolean arg)
		{
			return (return (ControlBuilder*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_ISSYNTHETIC_OFFSET))(arg, nullptr);
		}

		ControlBuilder* IsNoisy(::System::Boolean arg)
		{
			return (return (ControlBuilder*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_ISNOISY_OFFSET))(arg, nullptr);
		}

		ControlBuilder* DontReset(::System::Boolean arg)
		{
			return (return (ControlBuilder*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_DONTRESET_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithSizeInBits(::System::UInt32 arg)
		{
			return (return (ControlBuilder*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHSIZEINBITS_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithRange(::System::Single arg, ::System::Single arg)
		{
			return (return (ControlBuilder*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHRANGE_OFFSET))(arg, arg, nullptr);
		}

		ControlBuilder* WithUsages(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (ControlBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHUSAGES_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithUsages(Il2CppObject* arg)
		{
			return (return (ControlBuilder*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHUSAGES_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithUsages(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (ControlBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHUSAGES_OFFSET))(arg, nullptr);
		}

		ControlBuilder* WithParameters(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHPARAMETERS_OFFSET))(str, nullptr);
		}

		ControlBuilder* WithProcessors(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHPROCESSORS_OFFSET))(str, nullptr);
		}

		ControlBuilder* WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			return (return (ControlBuilder*(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_WITHDEFAULTSTATE_OFFSET))(arg, nullptr);
		}

		ControlBuilder* UsingStateFrom(::System::String* str)
		{
			return (return (ControlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_USINGSTATEFROM_OFFSET))(str, nullptr);
		}

		ControlBuilder* AsArrayOfControlsWithSize(::System::Int32 arg)
		{
			return (return (ControlBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBUILDER_ASARRAYOFCONTROLSWITHSIZE_OFFSET))(arg, nullptr);
		}

	};

