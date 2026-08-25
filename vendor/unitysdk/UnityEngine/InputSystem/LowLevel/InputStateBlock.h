#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x9F614E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x9F61920)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET UNITYSDK_OFFSET(0x9F61CD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x9F61D20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x9F61D30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F61D40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x9F61D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x9F61DA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET UNITYSDK_OFFSET(0x9F61DB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET UNITYSDK_OFFSET(0x9F62330)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9F5F170)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET UNITYSDK_OFFSET(0x9F62580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x9F62900)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F62910)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x9F62ED0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET UNITYSDK_OFFSET(0x9F633E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x9F63630)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x9F63640)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET UNITYSDK_OFFSET(0x9F63A80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET UNITYSDK_OFFSET(0x9F63E30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x9F64140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F64150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET UNITYSDK_OFFSET(0x9F64160)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBlock_TypeDefinitionIndex = 28817;

	class InputStateBlock : public Il2CppObject
	{
	public:
		::System::UInt32 InvalidOffset; // 0x0
		::System::UInt32 AutomaticOffset; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatInvalid; // 0x0
		::System::Int32 kFormatInvalid; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatBit; // 0x4
		::System::Int32 kFormatBit; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatSBit; // 0x8
		::System::Int32 kFormatSBit; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatInt; // 0xC
		::System::Int32 kFormatInt; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatUInt; // 0x10
		::System::Int32 kFormatUInt; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatShort; // 0x14
		::System::Int32 kFormatShort; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatUShort; // 0x18
		::System::Int32 kFormatUShort; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatByte; // 0x1C
		::System::Int32 kFormatByte; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatSByte; // 0x20
		::System::Int32 kFormatSByte; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatLong; // 0x24
		::System::Int32 kFormatLong; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatULong; // 0x28
		::System::Int32 kFormatULong; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatFloat; // 0x2C
		::System::Int32 kFormatFloat; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatDouble; // 0x30
		::System::Int32 kFormatDouble; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatVector2; // 0x34
		::System::Int32 kFormatVector2; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatVector3; // 0x38
		::System::Int32 kFormatVector3; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatQuaternion; // 0x3C
		::System::Int32 kFormatQuaternion; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* FormatVector2Short; // 0x40
		::UnityEngine::InputSystem::Utilities::FourCC* FormatVector3Short; // 0x44
		::UnityEngine::InputSystem::Utilities::FourCC* FormatVector2Byte; // 0x48
		::UnityEngine::InputSystem::Utilities::FourCC* FormatVector3Byte; // 0x4C
		::UnityEngine::InputSystem::Utilities::FourCC* FormatPose; // 0x50
		::System::Int32 kFormatPose; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC* _format_k__BackingField; // 0x10
		::System::UInt32 m_ByteOffset; // 0x14
		::System::UInt32 _bitOffset_k__BackingField; // 0x18
		::System::UInt32 _sizeInBits_k__BackingField; // 0x1C

		::System::Void WriteDouble(::System::Object** arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double ReadDouble(::System::Object** arg)
		{
			return (return (::System::Double(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_effectiveBitOffset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_sizeInBits(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_bitOffset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::UInt32 get_effectiveByteOffset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET))(nullptr);
		}

		::System::UInt32 get_byteOffset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* GetPrimitiveFormatFromType(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadInt(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_alignedSizeInBytes()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Int32 GetSizeOfPrimitiveFormatInBits(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET))(arg, nullptr);
		}

		::System::Void set_byteOffset(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue* FloatToPrimitiveValue(::System::Single arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::PrimitiveValue*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteInt(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_bitOffset(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void WriteFloat(::System::Object** arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ReadFloat(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Object** arg, ::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::System::Object**, ::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_sizeInBits()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET))(nullptr);
		}

		::System::Void set_format(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void CopyToFrom(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET))(arg, arg, nullptr);
		}

	};
}

