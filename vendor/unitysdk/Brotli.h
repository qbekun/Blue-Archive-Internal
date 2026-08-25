#pragma once
#include "unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeBrotliDecoderHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeBrotliEncoderHandle; }

#define BROTLI_BROTLIDECODERCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x980BD00)
#define BROTLI_BROTLIDECODERDECOMPRESSSTREAM_OFFSET UNITYSDK_OFFSET(0x980BDF0)
#define BROTLI_BROTLIDECODERDESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x980BE90)
#define BROTLI_BROTLIDECODERISFINISHED_OFFSET UNITYSDK_OFFSET(0x980BEA0)
#define BROTLI_BROTLIENCODERCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x980BF00)
#define BROTLI_BROTLIENCODERSETPARAMETER_OFFSET UNITYSDK_OFFSET(0x980BFF0)
#define BROTLI_BROTLIENCODERCOMPRESSSTREAM_OFFSET UNITYSDK_OFFSET(0x980C060)
#define BROTLI_BROTLIENCODERHASMOREOUTPUT_OFFSET UNITYSDK_OFFSET(0x980C110)
#define BROTLI_BROTLIENCODERDESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x980C170)

	inline static constexpr unsigned int Brotli_TypeDefinitionIndex = 38048;

	class Brotli : public Il2CppObject
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle* BrotliDecoderCreateInstance(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIDECODERCREATEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BrotliDecoderDecompressStream(::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle* arg, int32_t&* arg, ::System::Object** arg, int32_t&* arg, ::System::Object** arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle*, int32_t&*, ::System::Object**, int32_t&*, ::System::Object**, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIDECODERDECOMPRESSSTREAM_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BrotliDecoderDestroyInstance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIDECODERDESTROYINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean BrotliDecoderIsFinished(::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle*, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIDECODERISFINISHED_OFFSET))(arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle* BrotliEncoderCreateInstance(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIENCODERCREATEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean BrotliEncoderSetParameter(::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle* arg, ::System::IO::Compression::BrotliEncoderParameter* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle*, ::System::IO::Compression::BrotliEncoderParameter*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIENCODERSETPARAMETER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean BrotliEncoderCompressStream(::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle* arg, ::System::IO::Compression::BrotliEncoderOperation* arg, int32_t&* arg, ::System::Object** arg, int32_t&* arg, ::System::Object** arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle*, ::System::IO::Compression::BrotliEncoderOperation*, int32_t&*, ::System::Object**, int32_t&*, ::System::Object**, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIENCODERCOMPRESSSTREAM_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BrotliEncoderHasMoreOutput(::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle*, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIENCODERHASMOREOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Void BrotliEncoderDestroyInstance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BROTLI_BROTLIENCODERDESTROYINSTANCE_OFFSET))(arg, nullptr);
		}

	};

