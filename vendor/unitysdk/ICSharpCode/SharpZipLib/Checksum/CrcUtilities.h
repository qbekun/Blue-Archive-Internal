#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRCUTILITIES_GENERATESLICINGLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x90572E0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRCUTILITIES_UPDATEDATAFORREVERSEDPOLY_OFFSET UNITYSDK_OFFSET(0x9057520)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRCUTILITIES_UPDATEDATACOMMON_OFFSET UNITYSDK_OFFSET(0x9057860)

namespace ICSharpCode::SharpZipLib::Checksum
{
	inline static constexpr unsigned int CrcUtilities_TypeDefinitionIndex = 37138;

	class CrcUtilities : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GenerateSlicingLookupTable(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRCUTILITIES_GENERATESLICINGLOOKUPTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 UpdateDataForReversedPoly(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRCUTILITIES_UPDATEDATAFORREVERSEDPOLY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 UpdateDataCommon(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUM_CRCUTILITIES_UPDATEDATACOMMON_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

